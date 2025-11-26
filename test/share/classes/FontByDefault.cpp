#include <FontByDefault.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Font.h>
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
#include <javax/swing/JComponent.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JSpinner$DefaultEditor.h>
#include <javax/swing/JSpinner.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/plaf/UIResource.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Font = ::java::awt::Font;
using $Window = ::java::awt::Window;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
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
using $JComponent = ::javax::swing::JComponent;
using $JFormattedTextField = ::javax::swing::JFormattedTextField;
using $JFrame = ::javax::swing::JFrame;
using $JSpinner = ::javax::swing::JSpinner;
using $JSpinner$DefaultEditor = ::javax::swing::JSpinner$DefaultEditor;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;
using $UIResource = ::javax::swing::plaf::UIResource;

class FontByDefault$$Lambda$lambda$main$0 : public $Runnable {
	$class(FontByDefault$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($UIManager$LookAndFeelInfo* laf) {
		$set(this, laf, laf);
	}
	virtual void run() override {
		FontByDefault::lambda$main$0(laf);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<FontByDefault$$Lambda$lambda$main$0>());
	}
	$UIManager$LookAndFeelInfo* laf = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo FontByDefault$$Lambda$lambda$main$0::fieldInfos[2] = {
	{"laf", "Ljavax/swing/UIManager$LookAndFeelInfo;", nullptr, $PUBLIC, $field(FontByDefault$$Lambda$lambda$main$0, laf)},
	{}
};
$MethodInfo FontByDefault$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PUBLIC, $method(static_cast<void(FontByDefault$$Lambda$lambda$main$0::*)($UIManager$LookAndFeelInfo*)>(&FontByDefault$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo FontByDefault$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"FontByDefault$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* FontByDefault$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(FontByDefault$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* FontByDefault$$Lambda$lambda$main$0::class$ = nullptr;

$MethodInfo _FontByDefault_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FontByDefault::*)()>(&FontByDefault::init$))},
	{"lambda$main$0", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($UIManager$LookAndFeelInfo*)>(&FontByDefault::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&FontByDefault::main)), "java.lang.Exception"},
	{"run", "()V", nullptr, $PUBLIC},
	{"setLookAndFeel", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($UIManager$LookAndFeelInfo*)>(&FontByDefault::setLookAndFeel))},
	{"testDefaultFont", "(Ljavax/swing/JFrame;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($JFrame*)>(&FontByDefault::testDefaultFont))},
	{}
};

$ClassInfo _FontByDefault_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"FontByDefault",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_FontByDefault_MethodInfo_
};

$Object* allocate$FontByDefault($Class* clazz) {
	return $of($alloc(FontByDefault));
}

void FontByDefault::init$() {
}

void FontByDefault::main($StringArray* args) {
	$init(FontByDefault);
	$useLocalCurrentObjectStackCache();
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, laf, arr$->get(i$));
			{
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(FontByDefault$$Lambda$lambda$main$0, laf)));
				$SwingUtilities::invokeAndWait($$new(FontByDefault));
			}
		}
	}
}

void FontByDefault::run() {
	$useLocalCurrentObjectStackCache();
	$var($JFrame, mainFrame, $new($JFrame));
	{
		$var($Throwable, var$0, nullptr);
		try {
			testDefaultFont(mainFrame);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			mainFrame->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void FontByDefault::testDefaultFont($JFrame* frame) {
	$init(FontByDefault);
	$useLocalCurrentObjectStackCache();
	$nc(frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$var($JSpinner, spinner, $new($JSpinner));
	frame->add(static_cast<$Component*>(spinner));
	frame->setSize(300, 100);
	frame->setVisible(true);
	$var($JSpinner$DefaultEditor, editor, $cast($JSpinner$DefaultEditor, spinner->getEditor()));
	$var($Font, editorFont, $nc($($nc(editor)->getTextField()))->getFont());
	if (!($instanceOf($UIResource, editorFont))) {
		$throwNew($RuntimeException, "Font must be UIResource"_s);
	}
	if (!$nc(editorFont)->equals($(spinner->getFont()))) {
		$throwNew($RuntimeException, "Wrong FONT"_s);
	}
}

void FontByDefault::setLookAndFeel($UIManager$LookAndFeelInfo* laf) {
	$init(FontByDefault);
	try {
		$UIManager::setLookAndFeel($($nc(laf)->getClassName()));
	} catch ($ClassNotFoundException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($InstantiationException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($UnsupportedLookAndFeelException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($IllegalAccessException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

void FontByDefault::lambda$main$0($UIManager$LookAndFeelInfo* laf) {
	$init(FontByDefault);
	setLookAndFeel(laf);
}

FontByDefault::FontByDefault() {
}

$Class* FontByDefault::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(FontByDefault$$Lambda$lambda$main$0::classInfo$.name)) {
			return FontByDefault$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$loadClass(FontByDefault, name, initialize, &_FontByDefault_ClassInfo_, allocate$FontByDefault);
	return class$;
}

$Class* FontByDefault::class$ = nullptr;