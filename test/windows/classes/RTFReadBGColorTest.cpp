#include <RTFReadBGColorTest.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTextPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/EditorKit.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/SimpleAttributeSet.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/StyledDocument.h>
#include <javax/swing/text/StyledEditorKit.h>
#include <javax/swing/text/rtf/RTFEditorKit.h>
#include <jcpp.h>

#undef BGTEXT
#undef EXIT_ON_CLOSE
#undef YELLOW

using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Window = ::java::awt::Window;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Files = ::java::nio::file::Files;
using $OpenOption = ::java::nio::file::OpenOption;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;
using $JComponent = ::javax::swing::JComponent;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JFrame = ::javax::swing::JFrame;
using $JTextPane = ::javax::swing::JTextPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $Document = ::javax::swing::text::Document;
using $EditorKit = ::javax::swing::text::EditorKit;
using $Element = ::javax::swing::text::Element;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $SimpleAttributeSet = ::javax::swing::text::SimpleAttributeSet;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $StyledDocument = ::javax::swing::text::StyledDocument;
using $StyledEditorKit = ::javax::swing::text::StyledEditorKit;
using $RTFEditorKit = ::javax::swing::text::rtf::RTFEditorKit;

class RTFReadBGColorTest$$Lambda$lambda$main$0 : public $Runnable {
	$class(RTFReadBGColorTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		RTFReadBGColorTest::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<RTFReadBGColorTest$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo RTFReadBGColorTest$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RTFReadBGColorTest$$Lambda$lambda$main$0::*)()>(&RTFReadBGColorTest$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo RTFReadBGColorTest$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"RTFReadBGColorTest$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* RTFReadBGColorTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(RTFReadBGColorTest$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* RTFReadBGColorTest$$Lambda$lambda$main$0::class$ = nullptr;

$FieldInfo _RTFReadBGColorTest_FieldInfo_[] = {
	{"text", "Ljavax/swing/JTextPane;", nullptr, $STATIC, $staticField(RTFReadBGColorTest, text)},
	{"BGTEXT", "Ljava/lang/String;", nullptr, $STATIC, $staticField(RTFReadBGColorTest, BGTEXT)},
	{}
};

$MethodInfo _RTFReadBGColorTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RTFReadBGColorTest::*)()>(&RTFReadBGColorTest::init$))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&RTFReadBGColorTest::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&RTFReadBGColorTest::main)), "java.lang.Exception"},
	{"read", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&RTFReadBGColorTest::read))},
	{"write", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&RTFReadBGColorTest::write))},
	{}
};

$ClassInfo _RTFReadBGColorTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"RTFReadBGColorTest",
	"java.lang.Object",
	nullptr,
	_RTFReadBGColorTest_FieldInfo_,
	_RTFReadBGColorTest_MethodInfo_
};

$Object* allocate$RTFReadBGColorTest($Class* clazz) {
	return $of($alloc(RTFReadBGColorTest));
}

$JTextPane* RTFReadBGColorTest::text = nullptr;
$String* RTFReadBGColorTest::BGTEXT = nullptr;

void RTFReadBGColorTest::init$() {
}

void RTFReadBGColorTest::main($StringArray* a) {
	$init(RTFReadBGColorTest);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(RTFReadBGColorTest$$Lambda$lambda$main$0)));
}

void RTFReadBGColorTest::write() {
	$init(RTFReadBGColorTest);
	try {
		$var($OutputStream, o, $Files::newOutputStream($($Paths::get("test.rtf"_s, $$new($StringArray, 0))), $$new($OpenOptionArray, 0)));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$nc($($nc(RTFReadBGColorTest::text)->getEditorKit()))->write(o, $($nc(RTFReadBGColorTest::text)->getDocument()), 0, 0);
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					if (o != nullptr) {
						try {
							o->close();
						} catch ($Throwable&) {
							$var($Throwable, x2, $catch());
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				if (o != nullptr) {
					o->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} catch ($Exception&) {
		$var($Exception, e2, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e2));
	}
}

void RTFReadBGColorTest::read() {
	$init(RTFReadBGColorTest);
	try {
		$var($InputStream, in, $Files::newInputStream($($Paths::get("test.rtf"_s, $$new($StringArray, 0))), $$new($OpenOptionArray, 0)));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$nc($($nc(RTFReadBGColorTest::text)->getEditorKit()))->read(in, $($nc(RTFReadBGColorTest::text)->getDocument()), 0);
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					if (in != nullptr) {
						try {
							in->close();
						} catch ($Throwable&) {
							$var($Throwable, x2, $catch());
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				if (in != nullptr) {
					in->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} catch ($Exception&) {
		$var($Exception, e2, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e2));
	}
}

void RTFReadBGColorTest::lambda$main$0() {
	$init(RTFReadBGColorTest);
	$var($JFrame, f, $new($JFrame));
	f->setBounds(200, 600, 400, 300);
	f->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$assignStatic(RTFReadBGColorTest::text, $new($JTextPane));
	$nc(RTFReadBGColorTest::text)->setEditorKit($$new($RTFEditorKit));
	$var($MutableAttributeSet, attrBackground, $new($SimpleAttributeSet));
	$init($Color);
	$StyleConstants::setBackground(attrBackground, $Color::YELLOW);
	try {
		$nc($($nc(RTFReadBGColorTest::text)->getDocument()))->insertString(0, RTFReadBGColorTest::BGTEXT, attrBackground);
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
	write();
	read();
	$nc($(f->getContentPane()))->add(static_cast<$Component*>(RTFReadBGColorTest::text));
	f->setVisible(true);
	$nc(RTFReadBGColorTest::text)->setCaretPosition($nc(RTFReadBGColorTest::BGTEXT)->length() + 6);
	$var($StyledDocument, style, $nc(RTFReadBGColorTest::text)->getStyledDocument());
	$var($AttributeSet, oldSet, $nc($($nc(style)->getCharacterElement($nc(RTFReadBGColorTest::BGTEXT)->length() + 6)))->getAttributes());
	f->dispose();
	if (!$nc($(style->getBackground(oldSet)))->equals($Color::YELLOW)) {
		$throwNew($RuntimeException, "RTFEditorKit does not read background color"_s);
	}
}

void clinit$RTFReadBGColorTest($Class* class$) {
	$assignStatic(RTFReadBGColorTest::BGTEXT, "yellow_background\n"_s);
}

RTFReadBGColorTest::RTFReadBGColorTest() {
}

$Class* RTFReadBGColorTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(RTFReadBGColorTest$$Lambda$lambda$main$0::classInfo$.name)) {
			return RTFReadBGColorTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$loadClass(RTFReadBGColorTest, name, initialize, &_RTFReadBGColorTest_ClassInfo_, clinit$RTFReadBGColorTest, allocate$RTFReadBGColorTest);
	return class$;
}

$Class* RTFReadBGColorTest::class$ = nullptr;