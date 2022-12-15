import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Controls 2.3
Window {
    id:wd
    visible: true
    width: 640
    height: 480
    title: qsTr("Qtimer_QML")

    Connections{
        target: testing
        onNotice:{
            console.log("c++")
            if(data ==="timeout")
                wd.color="red"
        }
}



            Button {
                id:b1
               width: 100
               height: 50
                visible: true
                x:236
                y:107

                text: "Start"
                font.pixelSize: 10
                font.bold: true
                onClicked: {
              testing.start()
                    {
                       wd.color="blue"
                    }


                }

}
                Button {
                    id:b2
                    width: 100
                    height: 50
                    visible: true
                    x:236
                    y:200
                    text: "Stop"
                    font.pixelSize: 10
                    font.bold: true
                    onClicked: {
                   //   testing.stop()

                    }
                }

            }


