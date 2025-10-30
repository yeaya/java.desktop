#include <Test7149090.h>

#include <Test7149090$1.h>
#include <java/lang/Runnable.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/TitledBorder.h>
#include <jcpp.h>

#undef ABOVE_TOP
#undef DEFAULT_TITLE_POSITIONS
#undef TOP

using $Test7149090$1 = ::Test7149090$1;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $TitledBorder = ::javax::swing::border::TitledBorder;

$FieldInfo _Test7149090_FieldInfo_[] = {
	{"DEFAULT_TITLE_POSITIONS", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Test7149090, DEFAULT_TITLE_POSITIONS)},
	{}
};

$MethodInfo _Test7149090_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test7149090::*)()>(&Test7149090::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Test7149090::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _Test7149090_InnerClassesInfo_[] = {
	{"Test7149090$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Test7149090_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test7149090",
	"java.lang.Object",
	nullptr,
	_Test7149090_FieldInfo_,
	_Test7149090_MethodInfo_,
	nullptr,
	nullptr,
	_Test7149090_InnerClassesInfo_,
	nullptr,
	nullptr,
	"Test7149090$1"
};

$Object* allocate$Test7149090($Class* clazz) {
	return $of($alloc(Test7149090));
}

$ObjectArray2* Test7149090::DEFAULT_TITLE_POSITIONS = nullptr;

void Test7149090::init$() {
}

void Test7149090::main($StringArray* args) {
	$init(Test7149090);
	$useLocalCurrentObjectStackCache();
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, lookAndFeel, arr$->get(i$));
			{
				{
					$var($ObjectArray2, arr$, Test7149090::DEFAULT_TITLE_POSITIONS);
					int32_t len$ = arr$->length;
					int32_t i$ = 0;
					for (; i$ < len$; ++i$) {
						$var($ObjectArray, defaultTitlePosition, arr$->get(i$));
						{
							if ($nc($of($nc(defaultTitlePosition)->get(0)))->equals($($nc(lookAndFeel)->getName()))) {
								$UIManager::setLookAndFeel($($nc(lookAndFeel)->getClassName()));
								int32_t expectedPosition = $nc(($cast($Integer, defaultTitlePosition->get(1))))->intValue();
								$SwingUtilities::invokeAndWait($$new($Test7149090$1, expectedPosition));
								$nc($System::out)->println($$str({"Test passed for LookAndFeel "_s, $($nc(lookAndFeel)->getName())}));
							}
						}
					}
				}
			}
		}
	}
}

void clinit$Test7149090($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(Test7149090::DEFAULT_TITLE_POSITIONS, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("Metal"_s),
			$($of($Integer::valueOf($TitledBorder::TOP)))
		}),
		$$new($ObjectArray, {
			$of("Motif"_s),
			$($of($Integer::valueOf($TitledBorder::TOP)))
		}),
		$$new($ObjectArray, {
			$of("Windows"_s),
			$($of($Integer::valueOf($TitledBorder::TOP)))
		}),
		$$new($ObjectArray, {
			$of("Nimbus"_s),
			$($of($Integer::valueOf($TitledBorder::ABOVE_TOP)))
		})
	}));
}

Test7149090::Test7149090() {
}

$Class* Test7149090::load$($String* name, bool initialize) {
	$loadClass(Test7149090, name, initialize, &_Test7149090_ClassInfo_, clinit$Test7149090, allocate$Test7149090);
	return class$;
}

$Class* Test7149090::class$ = nullptr;