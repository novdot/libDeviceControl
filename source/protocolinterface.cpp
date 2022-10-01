#include <protocolinterface.h>

DeviceInterface::DeviceInterface(QWidget *parent)
{
    //m_rcHandler = 0;
    m_lFormat = DeviceInterface::getFormatList();

    tim = new QTimer();
    connect(tim,SIGNAL(timeout()),SLOT(timUpdateEvent()));

    m_pHardware = 0;
}

/*******************************************************************/
QList<device_robot> DeviceInterface::getRobotList()
{
    return m_lRobot;
}

/*******************************************************************/
void DeviceInterface::setRobotList(QList<device_robot> list){
    m_lRobot = list;

    //проверка на элементы , где есть только слейв. занесем их в отдельный список
    QList<device_robot>::ConstIterator begin;
    QList<device_robot>::ConstIterator end;
    begin = m_lRobot.constBegin();
    end = m_lRobot.constEnd();

    m_lRobotSlave.clear();

    for(QList<device_robot>::ConstIterator i = begin; i != end; ++i){
        if( ((*i).master.device != 0) ) continue;
        m_lRobotSlave.append((*i));
    }
    updateSlaveControl();
}

/*******************************************************************/
QList< QPair<int,QString> > DeviceInterface::getFormatList(){
    QList< QPair<int,QString> > lFormat;
    QPair<int,QString> format;
    format.first = _protocol_format_hex;
    format.second = trUtf8("Hex");
    lFormat.append(format);
    format.first = _protocol_format_utf8;
    format.second = trUtf8("Utf8");
    lFormat.append(format);
    format.first = _protocol_format_ascii;
    format.second = trUtf8("ASCII");
    lFormat.append(format);

    return lFormat;
}

/*******************************************************************/
void DeviceInterface::timStart(int period)
{
    tim->start(period);
}
/*******************************************************************/
void DeviceInterface::timStop()
{
    tim->stop();
}
/*******************************************************************/
void DeviceInterface::itemConnected(void * a_pitem,QString a_strName)
{
    m_strCOMName=a_strName;
}
/*******************************************************************/
void DeviceInterface::itemDisconnect(void * a_pitem)
{
    m_strCOMName="";
}
/*******************************************************************/
QString DeviceInterface::getCOMName()
{
    return m_strCOMName;
}
/*******************************************************************/
