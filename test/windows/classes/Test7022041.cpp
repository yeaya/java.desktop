#include <Test7022041.h>

#include <java/awt/Color.h>
#include <java/awt/Font.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/EmptyBorder.h>
#include <javax/swing/border/TitledBorder.h>
#include <jcpp.h>

#undef PLAIN

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Color = ::java::awt::Color;
using $Font = ::java::awt::Font;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $EmptyBorder = ::javax::swing::border::EmptyBorder;
using $TitledBorder = ::javax::swing::border::TitledBorder;

$MethodInfo _Test7022041_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test7022041::*)()>(&Test7022041::init$))},
	{"checkTitleColor", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&Test7022041::checkTitleColor))},
	{"checkTitleFont", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&Test7022041::checkTitleFont))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Test7022041::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _Test7022041_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test7022041",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Test7022041_MethodInfo_
};

$Object* allocate$Test7022041($Class* clazz) {
	return $of($alloc(Test7022041));
}

void Test7022041::init$() {
}

void Test7022041::main($StringArray* args) {
	$var($UIManager$LookAndFeelInfoArray, installedLookAndFeels, $UIManager::getInstalledLookAndFeels());
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, installedLookAndFeels);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, lookAndFeel, arr$->get(i$));
			{
				$var($String, name, $nc(lookAndFeel)->getName());
				$init($System);
				$nc($System::out)->println($$str({"Testing "_s, name}));
				try {
					$UIManager::setLookAndFeel($(lookAndFeel->getClassName()));
					checkTitleColor();
					$nc($System::out)->println("    titleColor test ok"_s);
					checkTitleFont();
					$nc($System::out)->println("    titleFont test ok"_s);
				} catch ($UnsupportedLookAndFeelException&) {
					$var($UnsupportedLookAndFeelException, e, $catch());
					$nc($System::out)->println($$str({"    Note: LookAndFeel "_s, name, " is not supported on this configuration"_s}));
				}
			}
		}
	}
}

void Test7022041::checkTitleColor() {
	$var($TitledBorder, titledBorder, $new($TitledBorder, static_cast<$Border*>($$new($EmptyBorder, 1, 1, 1, 1))));
	$var($Color, defaultColor, $nc($($UIManager::getLookAndFeelDefaults()))->getColor("TitledBorder.titleColor"_s));
	$var($Color, titledBorderColor, titledBorder->getTitleColor());
	if (defaultColor == nullptr) {
		if (titledBorderColor == nullptr) {
			return;
		} else {
			$throwNew($RuntimeException, "TitledBorder default color should be null"_s);
		}
	}
	if (!$nc(defaultColor)->equals(titledBorderColor)) {
		$var($String, var$0, $$str({"L&F default color "_s, $(defaultColor->toString()), " differs from TitledBorder color "_s}));
		$throwNew($RuntimeException, $$concat(var$0, $($nc(titledBorderColor)->toString())));
	}
	$var($Color, color, $Color::green);
	titledBorder->setTitleColor(color);
	if (!$nc(color)->equals($(titledBorder->getTitleColor()))) {
		$throwNew($RuntimeException, $$str({"TitledBorder color should be "_s, $(color->toString())}));
	}
	titledBorder->setTitleColor(nullptr);
	if (!$nc(defaultColor)->equals($(titledBorder->getTitleColor()))) {
		$var($String, var$1, $$str({"L&F default color "_s, $(defaultColor->toString()), " differs from TitledBorder color "_s}));
		$throwNew($RuntimeException, $$concat(var$1, $($nc(titledBorderColor)->toString())));
	}
}

void Test7022041::checkTitleFont() {
	$var($TitledBorder, titledBorder, $new($TitledBorder, static_cast<$Border*>($$new($EmptyBorder, 1, 1, 1, 1))));
	$var($Font, defaultFont, $nc($($UIManager::getLookAndFeelDefaults()))->getFont("TitledBorder.font"_s));
	$var($Font, titledBorderFont, titledBorder->getTitleFont());
	if (defaultFont == nullptr) {
		if (titledBorderFont == nullptr) {
			return;
		} else {
			$throwNew($RuntimeException, "TitledBorder default font should be null"_s);
		}
	}
	if (!$nc(defaultFont)->equals(titledBorderFont)) {
		$var($String, var$0, $$str({"L&F default font "_s, $(defaultFont->toString()), " differs from TitledBorder font "_s}));
		$throwNew($RuntimeException, $$concat(var$0, $($nc(titledBorderFont)->toString())));
	}
	$var($Font, font, $new($Font, "Dialog"_s, $Font::PLAIN, 10));
	titledBorder->setTitleFont(font);
	if (!font->equals($(titledBorder->getTitleFont()))) {
		$throwNew($RuntimeException, $$str({"TitledBorder font should be "_s, $(font->toString())}));
	}
	titledBorder->setTitleFont(nullptr);
	if (!$nc(defaultFont)->equals($(titledBorder->getTitleFont()))) {
		$var($String, var$1, $$str({"L&F default font "_s, $(defaultFont->toString()), " differs from TitledBorder font "_s}));
		$throwNew($RuntimeException, $$concat(var$1, $($nc(titledBorderFont)->toString())));
	}
}

Test7022041::Test7022041() {
}

$Class* Test7022041::load$($String* name, bool initialize) {
	$loadClass(Test7022041, name, initialize, &_Test7022041_ClassInfo_, allocate$Test7022041);
	return class$;
}

$Class* Test7022041::class$ = nullptr;