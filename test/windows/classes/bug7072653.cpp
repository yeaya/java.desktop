#include <bug7072653.h>

#include <bug7072653$1.h>
#include <bug7072653$2.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/ComboBoxModel.h>
#include <javax/swing/DefaultComboBoxModel.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/MutableComboBoxModel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/event/PopupMenuListener.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $GraphicsDeviceArray = $Array<::java::awt::GraphicsDevice>;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $bug7072653$1 = ::bug7072653$1;
using $bug7072653$2 = ::bug7072653$2;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $FlowLayout = ::java::awt::FlowLayout;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $LayoutManager = ::java::awt::LayoutManager;
using $Rectangle = ::java::awt::Rectangle;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $ComboBoxModel = ::javax::swing::ComboBoxModel;
using $DefaultComboBoxModel = ::javax::swing::DefaultComboBoxModel;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $MutableComboBoxModel = ::javax::swing::MutableComboBoxModel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;
using $PopupMenuListener = ::javax::swing::event::PopupMenuListener;

class bug7072653$$Lambda$lambda$executeCase$0 : public $Runnable {
	$class(bug7072653$$Lambda$lambda$executeCase$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($String* lookAndFeelString, $GraphicsDevice* sd) {
		$set(this, lookAndFeelString, lookAndFeelString);
		$set(this, sd, sd);
	}
	virtual void run() override {
		bug7072653::lambda$executeCase$0(lookAndFeelString, sd);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug7072653$$Lambda$lambda$executeCase$0>());
	}
	$String* lookAndFeelString = nullptr;
	$GraphicsDevice* sd = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo bug7072653$$Lambda$lambda$executeCase$0::fieldInfos[3] = {
	{"lookAndFeelString", "Ljava/lang/String;", nullptr, $PUBLIC, $field(bug7072653$$Lambda$lambda$executeCase$0, lookAndFeelString)},
	{"sd", "Ljava/awt/GraphicsDevice;", nullptr, $PUBLIC, $field(bug7072653$$Lambda$lambda$executeCase$0, sd)},
	{}
};
$MethodInfo bug7072653$$Lambda$lambda$executeCase$0::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;Ljava/awt/GraphicsDevice;)V", nullptr, $PUBLIC, $method(static_cast<void(bug7072653$$Lambda$lambda$executeCase$0::*)($String*,$GraphicsDevice*)>(&bug7072653$$Lambda$lambda$executeCase$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug7072653$$Lambda$lambda$executeCase$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug7072653$$Lambda$lambda$executeCase$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* bug7072653$$Lambda$lambda$executeCase$0::load$($String* name, bool initialize) {
	$loadClass(bug7072653$$Lambda$lambda$executeCase$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug7072653$$Lambda$lambda$executeCase$0::class$ = nullptr;

$FieldInfo _bug7072653_FieldInfo_[] = {
	{"combobox", "Ljavax/swing/JComboBox;", nullptr, $PRIVATE | $STATIC, $staticField(bug7072653, combobox)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug7072653, frame)},
	{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(bug7072653, robot)},
	{}
};

$MethodInfo _bug7072653_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug7072653::*)()>(&bug7072653::init$))},
	{"executeCase", "(Ljava/lang/String;Ljava/awt/GraphicsDevice;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,$GraphicsDevice*)>(&bug7072653::executeCase)), "java.lang.Exception"},
	{"lambda$executeCase$0", "(Ljava/lang/String;Ljava/awt/GraphicsDevice;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($String*,$GraphicsDevice*)>(&bug7072653::lambda$executeCase$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug7072653::main)), "java.lang.Exception"},
	{"setup", "(Ljava/lang/String;Ljava/awt/GraphicsDevice;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,$GraphicsDevice*)>(&bug7072653::setup)), "java.lang.Exception"},
	{"test", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug7072653::test)), "java.lang.Exception"},
	{"tryLookAndFeel", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*)>(&bug7072653::tryLookAndFeel)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug7072653_InnerClassesInfo_[] = {
	{"bug7072653$2", nullptr, nullptr, 0},
	{"bug7072653$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7072653_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug7072653",
	"java.lang.Object",
	nullptr,
	_bug7072653_FieldInfo_,
	_bug7072653_MethodInfo_,
	nullptr,
	nullptr,
	_bug7072653_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug7072653$2,bug7072653$1"
};

$Object* allocate$bug7072653($Class* clazz) {
	return $of($alloc(bug7072653));
}

$JComboBox* bug7072653::combobox = nullptr;
$JFrame* bug7072653::frame = nullptr;
$Robot* bug7072653::robot = nullptr;

void bug7072653::init$() {
}

void bug7072653::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$init(bug7072653);
	$assignStatic(bug7072653::robot, $new($Robot));
	$var($GraphicsEnvironment, ge, $GraphicsEnvironment::getLocalGraphicsEnvironment());
	$var($UIManager$LookAndFeelInfoArray, lookAndFeelArray, $UIManager::getInstalledLookAndFeels());
	{
		$var($GraphicsDeviceArray, arr$, $nc(ge)->getScreenDevices());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($GraphicsDevice, sd, arr$->get(i$));
			{
				{
					$var($UIManager$LookAndFeelInfoArray, arr$, lookAndFeelArray);
					int32_t len$ = arr$->length;
					int32_t i$ = 0;
					for (; i$ < len$; ++i$) {
						$var($UIManager$LookAndFeelInfo, lookAndFeelItem, arr$->get(i$));
						{
							executeCase($($nc(lookAndFeelItem)->getClassName()), sd);
							$nc(bug7072653::robot)->waitForIdle();
						}
					}
				}
			}
		}
	}
}

void bug7072653::executeCase($String* lookAndFeelString, $GraphicsDevice* sd) {
	if (tryLookAndFeel(lookAndFeelString)) {
		$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug7072653$$Lambda$lambda$executeCase$0, lookAndFeelString, sd)));
	}
}

void bug7072653::setup($String* lookAndFeelString, $GraphicsDevice* sd) {
	$useLocalCurrentObjectStackCache();
	$var($GraphicsConfiguration, gc, $nc(sd)->getDefaultConfiguration());
	$var($Rectangle, gcBounds, $nc(gc)->getBounds());
	$init(bug7072653);
	$assignStatic(bug7072653::frame, $new($JFrame, $$str({"JComboBox Test "_s, lookAndFeelString}), gc));
	$nc(bug7072653::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc(bug7072653::frame)->setSize(400, 200);
	$nc($($nc(bug7072653::frame)->getContentPane()))->setLayout($$new($FlowLayout));
	int32_t var$0 = $nc(gcBounds)->x + gcBounds->width / 2 - $nc(bug7072653::frame)->getWidth() / 2;
	$nc(bug7072653::frame)->setLocation(var$0, gcBounds->y + gcBounds->height / 2 - $nc(bug7072653::frame)->getHeight() / 2);
	$assignStatic(bug7072653::combobox, $new($JComboBox, static_cast<$ComboBoxModel*>($$new($bug7072653$1))));
	$nc(bug7072653::combobox)->setMaximumRowCount(400);
	$nc(bug7072653::combobox)->putClientProperty("JComboBox.isPopDown"_s, $($Boolean::valueOf(true)));
	$nc($($nc(bug7072653::frame)->getContentPane()))->add(static_cast<$Component*>(bug7072653::combobox));
	$nc(bug7072653::frame)->setVisible(true);
	$nc(bug7072653::robot)->delay(3000);
	$nc(bug7072653::combobox)->addPopupMenuListener($$new($bug7072653$2, lookAndFeelString));
}

void bug7072653::test() {
	$init(bug7072653);
	$nc(bug7072653::combobox)->setPopupVisible(true);
	$nc(bug7072653::combobox)->setPopupVisible(false);
}

bool bug7072653::tryLookAndFeel($String* lookAndFeelString) {
	try {
		$UIManager::setLookAndFeel(lookAndFeelString);
	} catch ($UnsupportedLookAndFeelException& e) {
		return false;
	} catch ($ClassNotFoundException& e) {
		return false;
	} catch ($InstantiationException& e) {
		return false;
	} catch ($IllegalAccessException& e) {
		return false;
	}
	return true;
}

void bug7072653::lambda$executeCase$0($String* lookAndFeelString, $GraphicsDevice* sd) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				setup(lookAndFeelString, sd);
				test();
			} catch ($Exception& ex) {
				$throwNew($RuntimeException, static_cast<$Throwable*>(ex));
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$init(bug7072653);
			$nc(bug7072653::frame)->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bug7072653::bug7072653() {
}

$Class* bug7072653::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug7072653$$Lambda$lambda$executeCase$0::classInfo$.name)) {
			return bug7072653$$Lambda$lambda$executeCase$0::load$(name, initialize);
		}
	}
	$loadClass(bug7072653, name, initialize, &_bug7072653_ClassInfo_, allocate$bug7072653);
	return class$;
}

$Class* bug7072653::class$ = nullptr;