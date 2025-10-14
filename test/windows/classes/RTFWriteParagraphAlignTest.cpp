#include <RTFWriteParagraphAlignTest.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/FileOutputStream.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/PrintStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTextPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/WindowConstants.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/rtf/RTFEditorKit.h>
#include <jcpp.h>

#undef ALIGN_CENTER
#undef ALIGN_JUSTIFIED
#undef ALIGN_LEFT
#undef ALIGN_RIGHT
#undef EXIT_ON_CLOSE
#undef RTF_DATA

using $ElementArray = $Array<::javax::swing::text::Element>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Frame = ::java::awt::Frame;
using $Rectangle = ::java::awt::Rectangle;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $FileOutputStream = ::java::io::FileOutputStream;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
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
using $JEditorPane = ::javax::swing::JEditorPane;
using $JFrame = ::javax::swing::JFrame;
using $JTextPane = ::javax::swing::JTextPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $WindowConstants = ::javax::swing::WindowConstants;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $StyledEditorKit = ::javax::swing::text::StyledEditorKit;
using $RTFEditorKit = ::javax::swing::text::rtf::RTFEditorKit;

class RTFWriteParagraphAlignTest$$Lambda$lambda$main$0 : public $Runnable {
	$class(RTFWriteParagraphAlignTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		RTFWriteParagraphAlignTest::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<RTFWriteParagraphAlignTest$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo RTFWriteParagraphAlignTest$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RTFWriteParagraphAlignTest$$Lambda$lambda$main$0::*)()>(&RTFWriteParagraphAlignTest$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo RTFWriteParagraphAlignTest$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"RTFWriteParagraphAlignTest$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* RTFWriteParagraphAlignTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(RTFWriteParagraphAlignTest$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* RTFWriteParagraphAlignTest$$Lambda$lambda$main$0::class$ = nullptr;

class RTFWriteParagraphAlignTest$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(RTFWriteParagraphAlignTest$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		RTFWriteParagraphAlignTest::lambda$main$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<RTFWriteParagraphAlignTest$$Lambda$lambda$main$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo RTFWriteParagraphAlignTest$$Lambda$lambda$main$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RTFWriteParagraphAlignTest$$Lambda$lambda$main$1$1::*)()>(&RTFWriteParagraphAlignTest$$Lambda$lambda$main$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo RTFWriteParagraphAlignTest$$Lambda$lambda$main$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"RTFWriteParagraphAlignTest$$Lambda$lambda$main$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* RTFWriteParagraphAlignTest$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$loadClass(RTFWriteParagraphAlignTest$$Lambda$lambda$main$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* RTFWriteParagraphAlignTest$$Lambda$lambda$main$1$1::class$ = nullptr;

class RTFWriteParagraphAlignTest$$Lambda$lambda$test$2$2 : public $Runnable {
	$class(RTFWriteParagraphAlignTest$$Lambda$lambda$test$2$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$(int32_t align) {
		this->align = align;
	}
	virtual void run() override {
		RTFWriteParagraphAlignTest::lambda$test$2(align);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<RTFWriteParagraphAlignTest$$Lambda$lambda$test$2$2>());
	}
	int32_t align = 0;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo RTFWriteParagraphAlignTest$$Lambda$lambda$test$2$2::fieldInfos[2] = {
	{"align", "I", nullptr, $PUBLIC, $field(RTFWriteParagraphAlignTest$$Lambda$lambda$test$2$2, align)},
	{}
};
$MethodInfo RTFWriteParagraphAlignTest$$Lambda$lambda$test$2$2::methodInfos[3] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(RTFWriteParagraphAlignTest$$Lambda$lambda$test$2$2::*)(int32_t)>(&RTFWriteParagraphAlignTest$$Lambda$lambda$test$2$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo RTFWriteParagraphAlignTest$$Lambda$lambda$test$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"RTFWriteParagraphAlignTest$$Lambda$lambda$test$2$2",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* RTFWriteParagraphAlignTest$$Lambda$lambda$test$2$2::load$($String* name, bool initialize) {
	$loadClass(RTFWriteParagraphAlignTest$$Lambda$lambda$test$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* RTFWriteParagraphAlignTest$$Lambda$lambda$test$2$2::class$ = nullptr;

class RTFWriteParagraphAlignTest$$Lambda$lambda$test$3$3 : public $Runnable {
	$class(RTFWriteParagraphAlignTest$$Lambda$lambda$test$3$3, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		RTFWriteParagraphAlignTest::lambda$test$3();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<RTFWriteParagraphAlignTest$$Lambda$lambda$test$3$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo RTFWriteParagraphAlignTest$$Lambda$lambda$test$3$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RTFWriteParagraphAlignTest$$Lambda$lambda$test$3$3::*)()>(&RTFWriteParagraphAlignTest$$Lambda$lambda$test$3$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo RTFWriteParagraphAlignTest$$Lambda$lambda$test$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"RTFWriteParagraphAlignTest$$Lambda$lambda$test$3$3",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* RTFWriteParagraphAlignTest$$Lambda$lambda$test$3$3::load$($String* name, bool initialize) {
	$loadClass(RTFWriteParagraphAlignTest$$Lambda$lambda$test$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* RTFWriteParagraphAlignTest$$Lambda$lambda$test$3$3::class$ = nullptr;

class RTFWriteParagraphAlignTest$$Lambda$lambda$test$4$4 : public $Runnable {
	$class(RTFWriteParagraphAlignTest$$Lambda$lambda$test$4$4, $NO_CLASS_INIT, $Runnable)
public:
	void init$($Document* d) {
		$set(this, d, d);
	}
	virtual void run() override {
		RTFWriteParagraphAlignTest::lambda$test$4(d);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<RTFWriteParagraphAlignTest$$Lambda$lambda$test$4$4>());
	}
	$Document* d = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo RTFWriteParagraphAlignTest$$Lambda$lambda$test$4$4::fieldInfos[2] = {
	{"d", "Ljavax/swing/text/Document;", nullptr, $PUBLIC, $field(RTFWriteParagraphAlignTest$$Lambda$lambda$test$4$4, d)},
	{}
};
$MethodInfo RTFWriteParagraphAlignTest$$Lambda$lambda$test$4$4::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/text/Document;)V", nullptr, $PUBLIC, $method(static_cast<void(RTFWriteParagraphAlignTest$$Lambda$lambda$test$4$4::*)($Document*)>(&RTFWriteParagraphAlignTest$$Lambda$lambda$test$4$4::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo RTFWriteParagraphAlignTest$$Lambda$lambda$test$4$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"RTFWriteParagraphAlignTest$$Lambda$lambda$test$4$4",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* RTFWriteParagraphAlignTest$$Lambda$lambda$test$4$4::load$($String* name, bool initialize) {
	$loadClass(RTFWriteParagraphAlignTest$$Lambda$lambda$test$4$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* RTFWriteParagraphAlignTest$$Lambda$lambda$test$4$4::class$ = nullptr;

class RTFWriteParagraphAlignTest$$Lambda$lambda$test$5$5 : public $Runnable {
	$class(RTFWriteParagraphAlignTest$$Lambda$lambda$test$5$5, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		RTFWriteParagraphAlignTest::lambda$test$5();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<RTFWriteParagraphAlignTest$$Lambda$lambda$test$5$5>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo RTFWriteParagraphAlignTest$$Lambda$lambda$test$5$5::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RTFWriteParagraphAlignTest$$Lambda$lambda$test$5$5::*)()>(&RTFWriteParagraphAlignTest$$Lambda$lambda$test$5$5::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo RTFWriteParagraphAlignTest$$Lambda$lambda$test$5$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"RTFWriteParagraphAlignTest$$Lambda$lambda$test$5$5",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* RTFWriteParagraphAlignTest$$Lambda$lambda$test$5$5::load$($String* name, bool initialize) {
	$loadClass(RTFWriteParagraphAlignTest$$Lambda$lambda$test$5$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* RTFWriteParagraphAlignTest$$Lambda$lambda$test$5$5::class$ = nullptr;

$FieldInfo _RTFWriteParagraphAlignTest_FieldInfo_[] = {
	{"RTF_DATA", "[Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RTFWriteParagraphAlignTest, RTF_DATA)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(RTFWriteParagraphAlignTest, frame)},
	{"jTextPane", "Ljavax/swing/JTextPane;", nullptr, $PRIVATE | $STATIC, $staticField(RTFWriteParagraphAlignTest, jTextPane)},
	{"position1", "I", nullptr, $PRIVATE | $STATIC, $staticField(RTFWriteParagraphAlignTest, position1)},
	{"position2", "I", nullptr, $PRIVATE | $STATIC, $staticField(RTFWriteParagraphAlignTest, position2)},
	{"rtfEditorKit", "Ljavax/swing/text/rtf/RTFEditorKit;", nullptr, $PRIVATE | $STATIC, $staticField(RTFWriteParagraphAlignTest, rtfEditorKit)},
	{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(RTFWriteParagraphAlignTest, robot)},
	{}
};

$MethodInfo _RTFWriteParagraphAlignTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RTFWriteParagraphAlignTest::*)()>(&RTFWriteParagraphAlignTest::init$))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&RTFWriteParagraphAlignTest::lambda$main$0))},
	{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&RTFWriteParagraphAlignTest::lambda$main$1))},
	{"lambda$test$2", "(I)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(int32_t)>(&RTFWriteParagraphAlignTest::lambda$test$2))},
	{"lambda$test$3", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&RTFWriteParagraphAlignTest::lambda$test$3))},
	{"lambda$test$4", "(Ljavax/swing/text/Document;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($Document*)>(&RTFWriteParagraphAlignTest::lambda$test$4))},
	{"lambda$test$5", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&RTFWriteParagraphAlignTest::lambda$test$5))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&RTFWriteParagraphAlignTest::main)), "java.lang.Exception"},
	{"test", "(I)V", nullptr, $STATIC, $method(static_cast<void(*)(int32_t)>(&RTFWriteParagraphAlignTest::test)), "java.lang.Exception"},
	{}
};

$ClassInfo _RTFWriteParagraphAlignTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"RTFWriteParagraphAlignTest",
	"java.lang.Object",
	nullptr,
	_RTFWriteParagraphAlignTest_FieldInfo_,
	_RTFWriteParagraphAlignTest_MethodInfo_
};

$Object* allocate$RTFWriteParagraphAlignTest($Class* clazz) {
	return $of($alloc(RTFWriteParagraphAlignTest));
}

$StringArray* RTFWriteParagraphAlignTest::RTF_DATA = nullptr;
$JFrame* RTFWriteParagraphAlignTest::frame = nullptr;
$JTextPane* RTFWriteParagraphAlignTest::jTextPane = nullptr;
int32_t RTFWriteParagraphAlignTest::position1 = 0;
int32_t RTFWriteParagraphAlignTest::position2 = 0;
$RTFEditorKit* RTFWriteParagraphAlignTest::rtfEditorKit = nullptr;
$Robot* RTFWriteParagraphAlignTest::robot = nullptr;

void RTFWriteParagraphAlignTest::init$() {
}

void RTFWriteParagraphAlignTest::main($StringArray* args) {
	$init(RTFWriteParagraphAlignTest);
	$assignStatic(RTFWriteParagraphAlignTest::rtfEditorKit, $new($RTFEditorKit));
	$assignStatic(RTFWriteParagraphAlignTest::robot, $new($Robot));
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(RTFWriteParagraphAlignTest$$Lambda$lambda$main$0)));
	test($StyleConstants::ALIGN_LEFT);
	test($StyleConstants::ALIGN_CENTER);
	test($StyleConstants::ALIGN_RIGHT);
	test($StyleConstants::ALIGN_JUSTIFIED);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(RTFWriteParagraphAlignTest$$Lambda$lambda$main$1$1)));
	$init($System);
	$nc($System::out)->println("ok"_s);
}

void RTFWriteParagraphAlignTest::test(int32_t align) {
	$init(RTFWriteParagraphAlignTest);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(RTFWriteParagraphAlignTest$$Lambda$lambda$test$2$2, align)));
	$nc(RTFWriteParagraphAlignTest::robot)->waitForIdle();
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(RTFWriteParagraphAlignTest$$Lambda$lambda$test$3$3)));
	$var($File, tempFile, $File::createTempFile("aaaa"_s, ".rtf"_s));
	$nc(tempFile)->deleteOnExit();
	$var($OutputStream, var$0, static_cast<$OutputStream*>($new($FileOutputStream, tempFile)));
	$var($Document, var$1, $nc(RTFWriteParagraphAlignTest::jTextPane)->getDocument());
	$nc(RTFWriteParagraphAlignTest::rtfEditorKit)->write(var$0, var$1, 0, $nc($($nc(RTFWriteParagraphAlignTest::jTextPane)->getDocument()))->getLength());
	$var($Document, d, $nc(RTFWriteParagraphAlignTest::rtfEditorKit)->createDefaultDocument());
	$nc(RTFWriteParagraphAlignTest::rtfEditorKit)->read(static_cast<$InputStream*>($$new($FileInputStream, tempFile)), d, 0);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(RTFWriteParagraphAlignTest$$Lambda$lambda$test$4$4, d)));
	$nc(RTFWriteParagraphAlignTest::robot)->waitForIdle();
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(RTFWriteParagraphAlignTest$$Lambda$lambda$test$5$5)));
	if (RTFWriteParagraphAlignTest::position1 != RTFWriteParagraphAlignTest::position2) {
		$throwNew($RuntimeException, "Alignment is not preserved after the document write/read"_s);
	}
}

void RTFWriteParagraphAlignTest::lambda$test$5() {
	$init(RTFWriteParagraphAlignTest);
	try {
		int32_t endOffset = $nc($($nc($nc($($nc($($nc(RTFWriteParagraphAlignTest::jTextPane)->getDocument()))->getRootElements()))->get(0))->getElement(0)))->getEndOffset();
		RTFWriteParagraphAlignTest::position2 = $nc($($nc(RTFWriteParagraphAlignTest::jTextPane)->modelToView(endOffset - 1)))->x;
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

void RTFWriteParagraphAlignTest::lambda$test$4($Document* d) {
	$init(RTFWriteParagraphAlignTest);
	$nc(RTFWriteParagraphAlignTest::jTextPane)->setDocument(d);
}

void RTFWriteParagraphAlignTest::lambda$test$3() {
	$init(RTFWriteParagraphAlignTest);
	try {
		int32_t endOffset = $nc($($nc($nc($($nc($($nc(RTFWriteParagraphAlignTest::jTextPane)->getDocument()))->getRootElements()))->get(0))->getElement(0)))->getEndOffset();
		RTFWriteParagraphAlignTest::position1 = $nc($($nc(RTFWriteParagraphAlignTest::jTextPane)->modelToView(endOffset - 1)))->x;
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

void RTFWriteParagraphAlignTest::lambda$test$2(int32_t align) {
	$init(RTFWriteParagraphAlignTest);
	$nc(RTFWriteParagraphAlignTest::jTextPane)->setDocument($($nc(RTFWriteParagraphAlignTest::rtfEditorKit)->createDefaultDocument()));
	try {
		$var($InputStream, var$0, static_cast<$InputStream*>($new($ByteArrayInputStream, $($nc($nc(RTFWriteParagraphAlignTest::RTF_DATA)->get(align))->getBytes()))));
		$nc(RTFWriteParagraphAlignTest::rtfEditorKit)->read(var$0, $($nc(RTFWriteParagraphAlignTest::jTextPane)->getDocument()), 0);
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

void RTFWriteParagraphAlignTest::lambda$main$1() {
	$init(RTFWriteParagraphAlignTest);
	$nc(RTFWriteParagraphAlignTest::frame)->dispose();
}

void RTFWriteParagraphAlignTest::lambda$main$0() {
	$init(RTFWriteParagraphAlignTest);
	$assignStatic(RTFWriteParagraphAlignTest::frame, $new($JFrame));
	$nc(RTFWriteParagraphAlignTest::frame)->setUndecorated(true);
	$nc(RTFWriteParagraphAlignTest::frame)->setDefaultCloseOperation($WindowConstants::EXIT_ON_CLOSE);
	$nc(RTFWriteParagraphAlignTest::frame)->setSize(600, 200);
	$assignStatic(RTFWriteParagraphAlignTest::jTextPane, $new($JTextPane));
	$nc($($nc(RTFWriteParagraphAlignTest::frame)->getContentPane()))->add(static_cast<$Component*>(RTFWriteParagraphAlignTest::jTextPane));
	$nc(RTFWriteParagraphAlignTest::frame)->setVisible(true);
}

void clinit$RTFWriteParagraphAlignTest($Class* class$) {
	$assignStatic(RTFWriteParagraphAlignTest::RTF_DATA, $new($StringArray, {
		"{\\rtf1\\ansi\\ansicpg1252\\cocoartf949\\cocoasubrtf350{\\fonttbl\\f0\\fswiss\\fcharset0 Helvetica;}{\\colortbl;\\red255\\green255\\blue255;}\\margl1440\\margr1440\\vieww9000\\viewh8400\\viewkind0\\pard\\ql\\pardirnatural\\f0\\fs24 \\cf0 left}"_s,
		"{\\rtf1\\ansi\\ansicpg1252\\cocoartf949\\cocoasubrtf350{\\fonttbl\\f0\\fswiss\\fcharset0 Helvetica;}{\\colortbl;\\red255\\green255\\blue255;}\\margl1440\\margr1440\\vieww9000\\viewh8400\\viewkind0\\pard\\qc\\pardirnatural\\f0\\fs24 \\cf0 center}"_s,
		"{\\rtf1\\ansi\\ansicpg1252\\cocoartf949\\cocoasubrtf350{\\fonttbl\\f0\\fswiss\\fcharset0 Helvetica;}{\\colortbl;\\red255\\green255\\blue255;}\\margl1440\\margr1440\\vieww9000\\viewh8400\\viewkind0\\pard\\qr\\pardirnatural\\f0\\fs24 \\cf0 right}"_s,
		"{\\rtf1\\ansi\\ansicpg1252\\cocoartf949\\cocoasubrtf350{\\fonttbl\\f0\\fswiss\\fcharset0 Helvetica;}{\\colortbl;\\red255\\green255\\blue255;}\\margl1440\\margr1440\\vieww9000\\viewh8400\\viewkind0\\pard\\qj\\pardirnatural\\f0\\fs24 \\cf0 justifiedtextjustifiedtext justifiedtextjustifiedtext justifiedtextjustifiedtext justifiedtextjustifiedtext justifiedtextjustifiedtext }"_s
	}));
}

RTFWriteParagraphAlignTest::RTFWriteParagraphAlignTest() {
}

$Class* RTFWriteParagraphAlignTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(RTFWriteParagraphAlignTest$$Lambda$lambda$main$0::classInfo$.name)) {
			return RTFWriteParagraphAlignTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(RTFWriteParagraphAlignTest$$Lambda$lambda$main$1$1::classInfo$.name)) {
			return RTFWriteParagraphAlignTest$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
		if (name->equals(RTFWriteParagraphAlignTest$$Lambda$lambda$test$2$2::classInfo$.name)) {
			return RTFWriteParagraphAlignTest$$Lambda$lambda$test$2$2::load$(name, initialize);
		}
		if (name->equals(RTFWriteParagraphAlignTest$$Lambda$lambda$test$3$3::classInfo$.name)) {
			return RTFWriteParagraphAlignTest$$Lambda$lambda$test$3$3::load$(name, initialize);
		}
		if (name->equals(RTFWriteParagraphAlignTest$$Lambda$lambda$test$4$4::classInfo$.name)) {
			return RTFWriteParagraphAlignTest$$Lambda$lambda$test$4$4::load$(name, initialize);
		}
		if (name->equals(RTFWriteParagraphAlignTest$$Lambda$lambda$test$5$5::classInfo$.name)) {
			return RTFWriteParagraphAlignTest$$Lambda$lambda$test$5$5::load$(name, initialize);
		}
	}
	$loadClass(RTFWriteParagraphAlignTest, name, initialize, &_RTFWriteParagraphAlignTest_ClassInfo_, clinit$RTFWriteParagraphAlignTest, allocate$RTFWriteParagraphAlignTest);
	return class$;
}

$Class* RTFWriteParagraphAlignTest::class$ = nullptr;