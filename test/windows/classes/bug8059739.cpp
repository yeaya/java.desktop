#include <bug8059739.h>

#include <bug8059739$1.h>
#include <java/awt/datatransfer/Clipboard.h>
#include <java/awt/datatransfer/DataFlavor.h>
#include <java/io/BufferedReader.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/PrintStream.h>
#include <java/io/Reader.h>
#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/TransferHandler.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef COPY

using $DataFlavorArray = $Array<::java::awt::datatransfer::DataFlavor>;
using $bug8059739$1 = ::bug8059739$1;
using $Clipboard = ::java::awt::datatransfer::Clipboard;
using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $BufferedReader = ::java::io::BufferedReader;
using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $PrintStream = ::java::io::PrintStream;
using $Reader = ::java::io::Reader;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JComponent = ::javax::swing::JComponent;
using $JTextField = ::javax::swing::JTextField;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $TransferHandler = ::javax::swing::TransferHandler;
using $JTextComponent = ::javax::swing::text::JTextComponent;

$FieldInfo _bug8059739_FieldInfo_[] = {
	{"passed", "Z", nullptr, $PRIVATE | $STATIC, $staticField(bug8059739, passed)},
	{}
};

$MethodInfo _bug8059739_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8059739::*)()>(&bug8059739::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug8059739::main)), "java.lang.Exception"},
	{"runTest", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug8059739::runTest)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug8059739_InnerClassesInfo_[] = {
	{"bug8059739$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8059739_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug8059739",
	"java.lang.Object",
	nullptr,
	_bug8059739_FieldInfo_,
	_bug8059739_MethodInfo_,
	nullptr,
	nullptr,
	_bug8059739_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug8059739$1"
};

$Object* allocate$bug8059739($Class* clazz) {
	return $of($alloc(bug8059739));
}

bool bug8059739::passed = false;

void bug8059739::init$() {
}

void bug8059739::main($StringArray* args) {
	$init(bug8059739);
	$SwingUtilities::invokeAndWait($$new($bug8059739$1));
	if (!bug8059739::passed) {
		$throwNew($RuntimeException, "Test FAILED."_s);
	} else {
		$init($System);
		$nc($System::out)->println("Passed."_s);
	}
}

void bug8059739::runTest() {
	$init(bug8059739);
	$useLocalCurrentObjectStackCache();
	$var($String, testString, "my string"_s);
	$var($JTextField, tf, $new($JTextField, testString));
	tf->selectAll();
	$var($Clipboard, clipboard, $new($Clipboard, "clip"_s));
	$nc($(tf->getTransferHandler()))->exportToClipboard(tf, clipboard, $TransferHandler::COPY);
	$var($DataFlavorArray, dfs, clipboard->getAvailableDataFlavors());
	{
		$var($DataFlavorArray, arr$, dfs);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($DataFlavor, df, arr$->get(i$));
			{
				$var($String, charset, $nc(df)->getParameter("charset"_s));
				$load($InputStream);
				if ($InputStream::class$->isAssignableFrom(df->getRepresentationClass()) && charset != nullptr) {
					$var($BufferedReader, br, $new($BufferedReader, $$new($InputStreamReader, $cast($InputStream, $(clipboard->getData(df))), charset)));
					$var($String, s, br->readLine());
					$init($System);
					$nc($System::out)->println($$str({"Content: \'"_s, s, "\'"_s}));
					bug8059739::passed &= $nc(s)->contains(testString);
				}
			}
		}
	}
}

void clinit$bug8059739($Class* class$) {
	bug8059739::passed = true;
}

bug8059739::bug8059739() {
}

$Class* bug8059739::load$($String* name, bool initialize) {
	$loadClass(bug8059739, name, initialize, &_bug8059739_ClassInfo_, clinit$bug8059739, allocate$bug8059739);
	return class$;
}

$Class* bug8059739::class$ = nullptr;