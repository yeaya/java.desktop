#include <GUIUndFrame.h>

#include <GUIUndFrame$1.h>
#include <GUIUndFrame$2.h>
#include <java/awt/Color.h>
#include <java/awt/Container.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/Frame.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowListener.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTextArea.h>
#include <jcpp.h>

#undef ICONIFIED
#undef MAXIMIZED_BOTH

using $GUIUndFrame$1 = ::GUIUndFrame$1;
using $GUIUndFrame$2 = ::GUIUndFrame$2;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $FlowLayout = ::java::awt::FlowLayout;
using $Frame = ::java::awt::Frame;
using $LayoutManager = ::java::awt::LayoutManager;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowListener = ::java::awt::event::WindowListener;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JFrame = ::javax::swing::JFrame;
using $JTextArea = ::javax::swing::JTextArea;

class GUIUndFrame$$Lambda$lambda$new$0 : public $ActionListener {
	$class(GUIUndFrame$$Lambda$lambda$new$0, $NO_CLASS_INIT, $ActionListener)
public:
	void init$(GUIUndFrame* inst) {
		$set(this, inst$, inst);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		$nc(inst$)->lambda$new$0(e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<GUIUndFrame$$Lambda$lambda$new$0>());
	}
	GUIUndFrame* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo GUIUndFrame$$Lambda$lambda$new$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(GUIUndFrame$$Lambda$lambda$new$0, inst$)},
	{}
};
$MethodInfo GUIUndFrame$$Lambda$lambda$new$0::methodInfos[3] = {
	{"<init>", "(LGUIUndFrame;)V", nullptr, $PUBLIC, $method(static_cast<void(GUIUndFrame$$Lambda$lambda$new$0::*)(GUIUndFrame*)>(&GUIUndFrame$$Lambda$lambda$new$0::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo GUIUndFrame$$Lambda$lambda$new$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"GUIUndFrame$$Lambda$lambda$new$0",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	fieldInfos,
	methodInfos
};
$Class* GUIUndFrame$$Lambda$lambda$new$0::load$($String* name, bool initialize) {
	$loadClass(GUIUndFrame$$Lambda$lambda$new$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* GUIUndFrame$$Lambda$lambda$new$0::class$ = nullptr;

class GUIUndFrame$$Lambda$lambda$new$1$1 : public $ActionListener {
	$class(GUIUndFrame$$Lambda$lambda$new$1$1, $NO_CLASS_INIT, $ActionListener)
public:
	void init$(GUIUndFrame* inst) {
		$set(this, inst$, inst);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		$nc(inst$)->lambda$new$1(e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<GUIUndFrame$$Lambda$lambda$new$1$1>());
	}
	GUIUndFrame* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo GUIUndFrame$$Lambda$lambda$new$1$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(GUIUndFrame$$Lambda$lambda$new$1$1, inst$)},
	{}
};
$MethodInfo GUIUndFrame$$Lambda$lambda$new$1$1::methodInfos[3] = {
	{"<init>", "(LGUIUndFrame;)V", nullptr, $PUBLIC, $method(static_cast<void(GUIUndFrame$$Lambda$lambda$new$1$1::*)(GUIUndFrame*)>(&GUIUndFrame$$Lambda$lambda$new$1$1::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo GUIUndFrame$$Lambda$lambda$new$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"GUIUndFrame$$Lambda$lambda$new$1$1",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	fieldInfos,
	methodInfos
};
$Class* GUIUndFrame$$Lambda$lambda$new$1$1::load$($String* name, bool initialize) {
	$loadClass(GUIUndFrame$$Lambda$lambda$new$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* GUIUndFrame$$Lambda$lambda$new$1$1::class$ = nullptr;

class GUIUndFrame$$Lambda$lambda$new$2$2 : public $ActionListener {
	$class(GUIUndFrame$$Lambda$lambda$new$2$2, $NO_CLASS_INIT, $ActionListener)
public:
	void init$(GUIUndFrame* inst) {
		$set(this, inst$, inst);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		$nc(inst$)->lambda$new$2(e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<GUIUndFrame$$Lambda$lambda$new$2$2>());
	}
	GUIUndFrame* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo GUIUndFrame$$Lambda$lambda$new$2$2::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(GUIUndFrame$$Lambda$lambda$new$2$2, inst$)},
	{}
};
$MethodInfo GUIUndFrame$$Lambda$lambda$new$2$2::methodInfos[3] = {
	{"<init>", "(LGUIUndFrame;)V", nullptr, $PUBLIC, $method(static_cast<void(GUIUndFrame$$Lambda$lambda$new$2$2::*)(GUIUndFrame*)>(&GUIUndFrame$$Lambda$lambda$new$2$2::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo GUIUndFrame$$Lambda$lambda$new$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"GUIUndFrame$$Lambda$lambda$new$2$2",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	fieldInfos,
	methodInfos
};
$Class* GUIUndFrame$$Lambda$lambda$new$2$2::load$($String* name, bool initialize) {
	$loadClass(GUIUndFrame$$Lambda$lambda$new$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* GUIUndFrame$$Lambda$lambda$new$2$2::class$ = nullptr;

class GUIUndFrame$$Lambda$lambda$new$3$3 : public $ActionListener {
	$class(GUIUndFrame$$Lambda$lambda$new$3$3, $NO_CLASS_INIT, $ActionListener)
public:
	void init$(GUIUndFrame* inst) {
		$set(this, inst$, inst);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		$nc(inst$)->lambda$new$3(e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<GUIUndFrame$$Lambda$lambda$new$3$3>());
	}
	GUIUndFrame* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo GUIUndFrame$$Lambda$lambda$new$3$3::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(GUIUndFrame$$Lambda$lambda$new$3$3, inst$)},
	{}
};
$MethodInfo GUIUndFrame$$Lambda$lambda$new$3$3::methodInfos[3] = {
	{"<init>", "(LGUIUndFrame;)V", nullptr, $PUBLIC, $method(static_cast<void(GUIUndFrame$$Lambda$lambda$new$3$3::*)(GUIUndFrame*)>(&GUIUndFrame$$Lambda$lambda$new$3$3::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo GUIUndFrame$$Lambda$lambda$new$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"GUIUndFrame$$Lambda$lambda$new$3$3",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	fieldInfos,
	methodInfos
};
$Class* GUIUndFrame$$Lambda$lambda$new$3$3::load$($String* name, bool initialize) {
	$loadClass(GUIUndFrame$$Lambda$lambda$new$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* GUIUndFrame$$Lambda$lambda$new$3$3::class$ = nullptr;

$FieldInfo _GUIUndFrame_FieldInfo_[] = {
	{"jframe1", "Ljavax/swing/JFrame;", nullptr, 0, $field(GUIUndFrame, jframe1)},
	{"jframe2", "Ljavax/swing/JFrame;", nullptr, 0, $field(GUIUndFrame, jframe2)},
	{"jframe3", "Ljavax/swing/JFrame;", nullptr, 0, $field(GUIUndFrame, jframe3)},
	{"comp", "Ljava/awt/Component;", nullptr, 0, $field(GUIUndFrame, comp)},
	{"jbutton1", "Ljavax/swing/JButton;", nullptr, 0, $field(GUIUndFrame, jbutton1)},
	{"jbutton2", "Ljavax/swing/JButton;", nullptr, 0, $field(GUIUndFrame, jbutton2)},
	{"jbutton3", "Ljavax/swing/JButton;", nullptr, 0, $field(GUIUndFrame, jbutton3)},
	{"jbutton4", "Ljavax/swing/JButton;", nullptr, 0, $field(GUIUndFrame, jbutton4)},
	{"jtextarea", "Ljavax/swing/JTextArea;", nullptr, 0, $field(GUIUndFrame, jtextarea)},
	{"win_act", "Z", nullptr, $VOLATILE, $field(GUIUndFrame, win_act)},
	{"win_deact", "Z", nullptr, $VOLATILE, $field(GUIUndFrame, win_deact)},
	{"win_ico", "Z", nullptr, $VOLATILE, $field(GUIUndFrame, win_ico)},
	{"win_deico", "Z", nullptr, $VOLATILE, $field(GUIUndFrame, win_deico)},
	{"win_close", "Z", nullptr, $VOLATILE, $field(GUIUndFrame, win_close)},
	{}
};

$MethodInfo _GUIUndFrame_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GUIUndFrame::*)()>(&GUIUndFrame::init$))},
	{"lambda$new$0", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(GUIUndFrame::*)($ActionEvent*)>(&GUIUndFrame::lambda$new$0))},
	{"lambda$new$1", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(GUIUndFrame::*)($ActionEvent*)>(&GUIUndFrame::lambda$new$1))},
	{"lambda$new$2", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(GUIUndFrame::*)($ActionEvent*)>(&GUIUndFrame::lambda$new$2))},
	{"lambda$new$3", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(GUIUndFrame::*)($ActionEvent*)>(&GUIUndFrame::lambda$new$3))},
	{}
};

$InnerClassInfo _GUIUndFrame_InnerClassesInfo_[] = {
	{"GUIUndFrame$2", nullptr, nullptr, 0},
	{"GUIUndFrame$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _GUIUndFrame_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"GUIUndFrame",
	"java.awt.Frame",
	nullptr,
	_GUIUndFrame_FieldInfo_,
	_GUIUndFrame_MethodInfo_,
	nullptr,
	nullptr,
	_GUIUndFrame_InnerClassesInfo_,
	nullptr,
	nullptr,
	"GUIUndFrame$2,GUIUndFrame$1"
};

$Object* allocate$GUIUndFrame($Class* clazz) {
	return $of($alloc(GUIUndFrame));
}

void GUIUndFrame::init$() {
	$useLocalCurrentObjectStackCache();
	$Frame::init$();
	$set(this, jframe1, $new($JFrame));
	$nc($($nc(this->jframe1)->getContentPane()))->setLayout($$new($FlowLayout));
	$nc(this->jframe1)->setSize(500, 255);
	$nc(this->jframe1)->setUndecorated(true);
	$init($Color);
	$nc($($nc(this->jframe1)->getContentPane()))->setBackground($Color::red);
	$nc(this->jframe1)->addWindowListener($$new($GUIUndFrame$1, this));
	$set(this, jbutton1, $new($JButton, "Hide me"_s));
	$nc(this->jbutton1)->addActionListener(static_cast<$ActionListener*>($$new(GUIUndFrame$$Lambda$lambda$new$0, this)));
	$set(this, jframe2, $new($JFrame));
	$nc($($nc(this->jframe2)->getContentPane()))->setLayout($$new($FlowLayout));
	$nc(this->jframe2)->setLocation(0, 270);
	$nc(this->jframe2)->setSize(500, 255);
	$nc($($nc(this->jframe2)->getContentPane()))->setBackground($Color::blue);
	$set(this, jbutton2, $new($JButton, "Show hiddenJFrame"_s));
	$nc(this->jbutton2)->addActionListener(static_cast<$ActionListener*>($$new(GUIUndFrame$$Lambda$lambda$new$1$1, this)));
	$set(this, jframe3, $new($JFrame));
	$nc($($nc(this->jframe3)->getContentPane()))->setLayout($$new($FlowLayout));
	$nc(this->jframe3)->setSize(500, 255);
	$nc($($nc(this->jframe3)->getContentPane()))->setBackground($Color::green);
	$nc(this->jframe3)->setUndecorated(true);
	$nc(this->jframe3)->addWindowListener($$new($GUIUndFrame$2, this));
	$set(this, jbutton3, $new($JButton, "Minimize me"_s));
	$nc(this->jbutton3)->addActionListener(static_cast<$ActionListener*>($$new(GUIUndFrame$$Lambda$lambda$new$2$2, this)));
	$set(this, jbutton4, $new($JButton, "Maximize me"_s));
	$nc(this->jbutton4)->addActionListener(static_cast<$ActionListener*>($$new(GUIUndFrame$$Lambda$lambda$new$3$3, this)));
	$set(this, jtextarea, $new($JTextArea, "Textarea"_s));
}

void GUIUndFrame::lambda$new$3($ActionEvent* e) {
	if ($nc($($Toolkit::getDefaultToolkit()))->isFrameStateSupported($Frame::MAXIMIZED_BOTH)) {
		$nc(this->jframe3)->setExtendedState($Frame::MAXIMIZED_BOTH);
	}
}

void GUIUndFrame::lambda$new$2($ActionEvent* e) {
	$nc(this->jframe3)->setState($Frame::ICONIFIED);
}

void GUIUndFrame::lambda$new$1($ActionEvent* e) {
	$nc(this->jframe1)->setVisible(true);
}

void GUIUndFrame::lambda$new$0($ActionEvent* e) {
	$nc(this->jframe1)->setVisible(false);
}

GUIUndFrame::GUIUndFrame() {
}

$Class* GUIUndFrame::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(GUIUndFrame$$Lambda$lambda$new$0::classInfo$.name)) {
			return GUIUndFrame$$Lambda$lambda$new$0::load$(name, initialize);
		}
		if (name->equals(GUIUndFrame$$Lambda$lambda$new$1$1::classInfo$.name)) {
			return GUIUndFrame$$Lambda$lambda$new$1$1::load$(name, initialize);
		}
		if (name->equals(GUIUndFrame$$Lambda$lambda$new$2$2::classInfo$.name)) {
			return GUIUndFrame$$Lambda$lambda$new$2$2::load$(name, initialize);
		}
		if (name->equals(GUIUndFrame$$Lambda$lambda$new$3$3::classInfo$.name)) {
			return GUIUndFrame$$Lambda$lambda$new$3$3::load$(name, initialize);
		}
	}
	$loadClass(GUIUndFrame, name, initialize, &_GUIUndFrame_ClassInfo_, allocate$GUIUndFrame);
	return class$;
}

$Class* GUIUndFrame::class$ = nullptr;