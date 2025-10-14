#include <bug6771184$1.h>

#include <bug6771184$1$1.h>
#include <bug6771184.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Highlighter$HighlightPainter.h>
#include <javax/swing/text/Highlighter.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef MIN_VALUE

using $intArray2 = $Array<int32_t, 2>;
using $bug6771184 = ::bug6771184;
using $bug6771184$1$1 = ::bug6771184$1$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JTextArea = ::javax::swing::JTextArea;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Highlighter = ::javax::swing::text::Highlighter;
using $Highlighter$HighlightPainter = ::javax::swing::text::Highlighter$HighlightPainter;
using $JTextComponent = ::javax::swing::text::JTextComponent;

$MethodInfo _bug6771184$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6771184$1::*)()>(&bug6771184$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6771184$1_EnclosingMethodInfo_ = {
	"bug6771184",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6771184$1_InnerClassesInfo_[] = {
	{"bug6771184$1", nullptr, nullptr, 0},
	{"bug6771184$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6771184$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6771184$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6771184$1_MethodInfo_,
	nullptr,
	&_bug6771184$1_EnclosingMethodInfo_,
	_bug6771184$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6771184"
};

$Object* allocate$bug6771184$1($Class* clazz) {
	return $of($alloc(bug6771184$1));
}

void bug6771184$1::init$() {
}

void bug6771184$1::run() {
	$var($JTextArea, textArea, $new($JTextArea, "Tested string"_s));
	$var($Highlighter, highlighter, textArea->getHighlighter());
	$var($Highlighter$HighlightPainter, myPainter, $new($bug6771184$1$1, this));
	$var($intArray2, negativeTestedData, $new($intArray2, {
		$$new($ints, {
			50,
			0
		}),
		$$new($ints, {
			-1,
			1
		}),
		$$new($ints, {
			-5,
			-4
		}),
		$$new($ints, {
			$Integer::MAX_VALUE,
			$Integer::MIN_VALUE
		}),
		$$new($ints, {
			$Integer::MIN_VALUE,
			$Integer::MAX_VALUE
		}),
		$$new($ints, {
			$Integer::MIN_VALUE,
			$Integer::MIN_VALUE
		})
	}));
	{
		$var($intArray2, arr$, negativeTestedData);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($ints, data, arr$->get(i$));
			{
				try {
					$nc(highlighter)->addHighlight($nc(data)->get(0), data->get(1), myPainter);
					$throwNew($RuntimeException, $$str({"Method addHighlight() does not throw BadLocationException for ("_s, $$str($nc(data)->get(0)), ", "_s, $$str(data->get(1)), ") "_s}));
				} catch ($BadLocationException&) {
					$catch();
				}
				$var($Object, objRef, nullptr);
				try {
					$assign(objRef, $nc(highlighter)->addHighlight(0, 1, myPainter));
				} catch ($BadLocationException&) {
					$var($BadLocationException, e, $catch());
					$throwNew($RuntimeException, "highlighter.addHighlight(0, 1, myPainter) throws exception"_s, e);
				}
				try {
					$nc(highlighter)->changeHighlight(objRef, $nc(data)->get(0), data->get(1));
					$throwNew($RuntimeException, $$str({"Method changeHighlight() does not throw BadLocationException for ("_s, $$str($nc(data)->get(0)), ", "_s, $$str(data->get(1)), ") "_s}));
				} catch ($BadLocationException&) {
					$catch();
				}
			}
		}
	}
}

bug6771184$1::bug6771184$1() {
}

$Class* bug6771184$1::load$($String* name, bool initialize) {
	$loadClass(bug6771184$1, name, initialize, &_bug6771184$1_ClassInfo_, allocate$bug6771184$1);
	return class$;
}

$Class* bug6771184$1::class$ = nullptr;