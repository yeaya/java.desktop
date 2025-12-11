#include <GUIZoomFrame.h>

#include <GUIZoomFrame$1.h>
#include <GUIZoomFrame$2.h>
#include <java/awt/Color.h>
#include <java/awt/Container.h>
#include <java/awt/Frame.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Window.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowStateListener.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTextArea.h>
#include <jcpp.h>

using $GUIZoomFrame$1 = ::GUIZoomFrame$1;
using $GUIZoomFrame$2 = ::GUIZoomFrame$2;
using $Color = ::java::awt::Color;
using $Container = ::java::awt::Container;
using $Frame = ::java::awt::Frame;
using $LayoutManager = ::java::awt::LayoutManager;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowStateListener = ::java::awt::event::WindowStateListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;
using $JFrame = ::javax::swing::JFrame;
using $JTextArea = ::javax::swing::JTextArea;

$FieldInfo _GUIZoomFrame_FieldInfo_[] = {
	{"jframe1", "Ljavax/swing/JFrame;", nullptr, 0, $field(GUIZoomFrame, jframe1)},
	{"jframe2", "Ljavax/swing/JFrame;", nullptr, 0, $field(GUIZoomFrame, jframe2)},
	{"jbutton", "Ljavax/swing/JButton;", nullptr, 0, $field(GUIZoomFrame, jbutton)},
	{"jtextarea", "Ljavax/swing/JTextArea;", nullptr, 0, $field(GUIZoomFrame, jtextarea)},
	{"maxHor", "Z", nullptr, $VOLATILE, $field(GUIZoomFrame, maxHor)},
	{"maxVer", "Z", nullptr, $VOLATILE, $field(GUIZoomFrame, maxVer)},
	{"maxBoth", "Z", nullptr, $VOLATILE, $field(GUIZoomFrame, maxBoth)},
	{"normal", "Z", nullptr, $VOLATILE, $field(GUIZoomFrame, normal)},
	{"iconify", "Z", nullptr, $VOLATILE, $field(GUIZoomFrame, iconify)},
	{}
};

$MethodInfo _GUIZoomFrame_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GUIZoomFrame::*)()>(&GUIZoomFrame::init$))},
	{}
};

$InnerClassInfo _GUIZoomFrame_InnerClassesInfo_[] = {
	{"GUIZoomFrame$2", nullptr, nullptr, 0},
	{"GUIZoomFrame$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _GUIZoomFrame_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"GUIZoomFrame",
	"java.awt.Frame",
	nullptr,
	_GUIZoomFrame_FieldInfo_,
	_GUIZoomFrame_MethodInfo_,
	nullptr,
	nullptr,
	_GUIZoomFrame_InnerClassesInfo_,
	nullptr,
	nullptr,
	"GUIZoomFrame$2,GUIZoomFrame$1"
};

$Object* allocate$GUIZoomFrame($Class* clazz) {
	return $of($alloc(GUIZoomFrame));
}

void GUIZoomFrame::init$() {
	$useLocalCurrentObjectStackCache();
	$Frame::init$();
	$set(this, jframe1, $new($JFrame, "ZoomJFrameChangeState"_s));
	$init($Color);
	$nc($($nc(this->jframe1)->getContentPane()))->setBackground($Color::red);
	$nc($($nc(this->jframe1)->getContentPane()))->setLayout(nullptr);
	$nc(this->jframe1)->setSize(500, 270);
	$set(this, jframe2, $new($JFrame, "ZoomJFrameRepaint"_s));
	$nc($($nc(this->jframe2)->getContentPane()))->setBackground($Color::red);
	$nc(this->jframe2)->setSize(500, 270);
	$nc($($nc(this->jframe2)->getContentPane()))->setLayout(nullptr);
	$set(this, jbutton, $new($JButton, "TestButton"_s));
	$set(this, jtextarea, $new($JTextArea, "TextArea"_s));
	$nc(this->jbutton)->setBounds(20, 100, 80, 60);
	$nc(this->jtextarea)->setBounds(120, 100, 80, 60);
	$nc(this->jframe1)->addWindowStateListener($$new($GUIZoomFrame$1, this));
	$nc(this->jframe2)->addWindowStateListener($$new($GUIZoomFrame$2, this));
}

GUIZoomFrame::GUIZoomFrame() {
}

$Class* GUIZoomFrame::load$($String* name, bool initialize) {
	$loadClass(GUIZoomFrame, name, initialize, &_GUIZoomFrame_ClassInfo_, allocate$GUIZoomFrame);
	return class$;
}

$Class* GUIZoomFrame::class$ = nullptr;