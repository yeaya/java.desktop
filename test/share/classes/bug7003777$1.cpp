#include <bug7003777$1.h>

#include <bug7003777.h>
#include <javax/swing/JTextPane.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef TEST_STRINGS

using $bug7003777 = ::bug7003777;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JTextPane = ::javax::swing::JTextPane;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Document = ::javax::swing::text::Document;

$MethodInfo _bug7003777$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug7003777$1::*)()>(&bug7003777$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug7003777$1_EnclosingMethodInfo_ = {
	"bug7003777",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug7003777$1_InnerClassesInfo_[] = {
	{"bug7003777$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7003777$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug7003777$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug7003777$1_MethodInfo_,
	nullptr,
	&_bug7003777$1_EnclosingMethodInfo_,
	_bug7003777$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug7003777"
};

$Object* allocate$bug7003777$1($Class* clazz) {
	return $of($alloc(bug7003777$1));
}

void bug7003777$1::init$() {
}

void bug7003777$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($JTextPane, pane, $new($JTextPane));
	pane->setContentType("text/html"_s);
	{
		$init($bug7003777);
		$var($StringArray, arr$, $bug7003777::TEST_STRINGS);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, testString, arr$->get(i$));
			{
				pane->setText(testString);
				$var($String, parsedText, nullptr);
				try {
					$assign(parsedText, $nc($(pane->getDocument()))->getText(0, $nc($(pane->getDocument()))->getLength()));
				} catch ($BadLocationException& e) {
					$throwNew($RuntimeException, "The test failed."_s, e);
				}
				if ($nc(parsedText)->charAt(0) != u'\n') {
					$throwNew($RuntimeException, "The first char should be \\n"_s);
				}
				$assign(parsedText, $nc(parsedText)->substring(1));
				if (!$nc(testString)->equals(parsedText)) {
					$throwNew($RuntimeException, $$str({"The \'"_s, testString, "\' string wasn\'t parsed correctly. Parsed value is \'"_s, parsedText, "\'"_s}));
				}
			}
		}
	}
}

bug7003777$1::bug7003777$1() {
}

$Class* bug7003777$1::load$($String* name, bool initialize) {
	$loadClass(bug7003777$1, name, initialize, &_bug7003777$1_ClassInfo_, allocate$bug7003777$1);
	return class$;
}

$Class* bug7003777$1::class$ = nullptr;