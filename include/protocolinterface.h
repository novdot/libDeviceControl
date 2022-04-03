#ifndef DeviceInterface_H
#define DeviceInterface_H

#include <QObject>
#include <QWidget>
#include <QPair>
#include <QList>
#include <QByteArray>
#include <QDebug>
#include <QTimer>


/*!
    \defgroup DeviceInterface интерфейс устройства
    \ingroup Device
    \brief интерфейс устройства
*/
///@{


///Форматы информации
typedef enum device_formatDef{
    _protocol_format_hex = 0 ///< информация - строка содержащая в 16-ой код
    , _protocol_format_utf8 = 1 ///< информация текстовый формат в кодировке UTF-8
    , _protocol_format_ascii = 2 ///< информация текстовый формат в кодировке ASCII
}device_format;

#define DEVICE_ROBOT_VALUE_DEFAULT "as is"

///структура элемента робота
typedef struct device_robot_srcDef{
    void* device; ///< ссылка на устройство Protocol
    device_format format; ///< формат информации
    QString value; ///< значение
}device_robot_src;

///структура условия событие -> действие
typedef struct device_robotDef {
    QString name;  ///< имя условия
    device_robot_src slave;  ///< элемент раб
    device_robot_src master;  ///< элемент мастер
}device_robot;

/*!
    \brief
    \author dnovikov
    \date 2020 01 17
    \warning на стадии разработки
 * */
class DeviceInterface : public QWidget
{
    Q_OBJECT
public:
    DeviceInterface(QWidget *parent = nullptr);
    /*!
        \brief получение текущего списка условий для робота
     * */
    QList<device_robot> getRobotList();
    /*!
        \brief установка списка условий для робота
     * */
    void setRobotList(QList<device_robot> list);

    /*!
        \brief получить список всех возможных форматов
     * */
    static QList< QPair<int,QString> > getFormatList();

    QList< QPair<QString,QString> > m_lConsoleCmd; ///< список косольных команд
public slots:
    /*!
     * \brief timStop остановка таймера
     */
    virtual void timStart(int period);
    /*!
     * \brief timStop остановка таймера
     */
    virtual void timStop();
    /*!
     * \brief timUpdateEvent слот обработки событий таймера
     */
    virtual void timUpdateEvent() = 0;
    /*!
     * \brief слот для обработки входящего пакета
    */
    virtual void receiveDataFromDevice(QByteArray a_data) = 0;
    /*!
     * \brief слот для отправки пакета
    */
    virtual void sendDataToDevice(QByteArray a_data) = 0;
    /*!
     * \brief обновление отображения логики робота
     */
    virtual void showRobotView() = 0;
    /*!
     * \brief обновление списка возможных команд
     */
    virtual void updateSlaveControl() = 0;
    /*!
     * \brief слот для обновления имени устройства в случае подключения устройства
    */
    void itemConnected(void * a_pitem,QString a_strName);
    /*!
     * \brief слот для сброса имени устройства в случае отключения устройства
    */
    void itemDisconnect(void * a_pitem);
    /*!
     * \brief получить текущее имя устройства
    */
    QString getCOMName();

    virtual void console(QList< QPair<QString,QString > > commands) = 0;

signals:
    /*!
     * \brief сигнал пакета управления устройством
    */
    void send(QByteArray);

    /*!
     * \brief сигнал обновления списка слейва, для обновления возможных команд от Protocol
    */
    void slaveListUpdated();

    /*!
     * \brief receive сигнал о полученном пакете
     */
    void receiveDone(QByteArray);

    /*!
     * \brief Отправка в лог информации
     */
    void add2Log(QString);
private:
protected:
    QString m_strCOMName; ///< имя устройства
    QList<device_robot> m_lRobot; ///< список событий
    QList<device_robot> m_lRobotSlave;///< подсписки событий. Содержатся только события для слейва - быстрые команды на выдачу
    QList< QPair<int,QString> > m_lFormat; ///< списки возможных значений: формат входных/выходных данных   
    QTimer *tim; ///< таймер для периодической отправки
};

///@}
#endif // ProtocolInterface_H
