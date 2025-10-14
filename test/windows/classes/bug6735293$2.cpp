#include <bug6735293$2.h>

#include <bug6735293.h>
#include <java/awt/Window.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/NavigationFilter.h>
#include <javax/swing/text/Position$Bias.h>
#include <jcpp.h>

#undef EAST
#undef MIN_VALUE
#undef NORTH
#undef SOUTH
#undef WEST

using $Position$BiasArray = $Array<::javax::swing::text::Position$Bias>;
using $bug6735293 = ::bug6735293;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JFormattedTextField = ::javax::swing::JFormattedTextField;
using $JFrame = ::javax::swing::JFrame;
using $JTextField = ::javax::swing::JTextField;
using $SwingConstants = ::javax::swing::SwingConstants;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $NavigationFilter = ::javax::swing::text::NavigationFilter;
using $Position$Bias = ::javax::swing::text::Position$Bias;

$MethodInfo _bug6735293$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6735293$2::*)()>(&bug6735293$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6735293$2_EnclosingMethodInfo_ = {
	"bug6735293",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6735293$2_InnerClassesInfo_[] = {
	{"bug6735293$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6735293$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug6735293$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6735293$2_MethodInfo_,
	nullptr,
	&_bug6735293$2_EnclosingMethodInfo_,
	_bug6735293$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6735293"
};

$Object* allocate$bug6735293$2($Class* clazz) {
	return $of($alloc(bug6735293$2));
}

void bug6735293$2::init$() {
}

void bug6735293$2::run() {
	$init($Position$Bias);
	$var($Position$BiasArray, biasRet, $new($Position$BiasArray, {$Position$Bias::Forward}));
	{
		$var($ints, arr$, $new($ints, {
			$SwingConstants::EAST,
			$SwingConstants::WEST,
			$SwingConstants::SOUTH,
			$SwingConstants::NORTH
		}));
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int32_t direction = arr$->get(i$);
			{
				{
					$var($ints, arr$, $new($ints, {
						-100,
						$Integer::MIN_VALUE
					}));
					int32_t len$ = arr$->length;
					int32_t i$ = 0;
					for (; i$ < len$; ++i$) {
						int32_t position = arr$->get(i$);
						{
							{
								$var($Position$BiasArray, arr$, $new($Position$BiasArray, {
									$Position$Bias::Backward,
									$Position$Bias::Forward
								}));
								int32_t len$ = arr$->length;
								int32_t i$ = 0;
								for (; i$ < len$; ++i$) {
									$var($Position$Bias, bias, arr$->get(i$));
									{
										try {
											$init($bug6735293);
											$nc($bug6735293::nf)->getNextVisualPositionFrom($bug6735293::jtf, position, bias, direction, biasRet);
											$throwNew($RuntimeException, $$str({"BadLocationException was not thrown: position = "_s, $$str(position), ", bias = "_s, bias, ", direction = "_s, $$str(direction)}));
										} catch ($BadLocationException&) {
											$catch();
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	$init($bug6735293);
	$nc($bug6735293::jFrame)->dispose();
}

bug6735293$2::bug6735293$2() {
}

$Class* bug6735293$2::load$($String* name, bool initialize) {
	$loadClass(bug6735293$2, name, initialize, &_bug6735293$2_ClassInfo_, allocate$bug6735293$2);
	return class$;
}

$Class* bug6735293$2::class$ = nullptr;