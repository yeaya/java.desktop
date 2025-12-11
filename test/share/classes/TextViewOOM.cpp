#include <TextViewOOM.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/EventQueue.h>
#include <java/awt/Window.h>
#include <java/io/Serializable.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/lang/Runtime.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef N
#undef STRING

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $EventQueue = ::java::awt::EventQueue;
using $Window = ::java::awt::Window;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Runtime = ::java::lang::Runtime;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTextArea = ::javax::swing::JTextArea;
using $JTextComponent = ::javax::swing::text::JTextComponent;

class TextViewOOM$$Lambda$createAndShowGUI : public $Runnable {
	$class(TextViewOOM$$Lambda$createAndShowGUI, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TextViewOOM::createAndShowGUI();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TextViewOOM$$Lambda$createAndShowGUI>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TextViewOOM$$Lambda$createAndShowGUI::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TextViewOOM$$Lambda$createAndShowGUI::*)()>(&TextViewOOM$$Lambda$createAndShowGUI::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TextViewOOM$$Lambda$createAndShowGUI::classInfo$ = {
	$PUBLIC | $FINAL,
	"TextViewOOM$$Lambda$createAndShowGUI",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* TextViewOOM$$Lambda$createAndShowGUI::load$($String* name, bool initialize) {
	$loadClass(TextViewOOM$$Lambda$createAndShowGUI, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TextViewOOM$$Lambda$createAndShowGUI::class$ = nullptr;

class TextViewOOM$$Lambda$lambda$main$0$1 : public $Runnable {
	$class(TextViewOOM$$Lambda$lambda$main$0$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$($StringBuilder* sb) {
		$set(this, sb, sb);
	}
	virtual void run() override {
		TextViewOOM::lambda$main$0(sb);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TextViewOOM$$Lambda$lambda$main$0$1>());
	}
	$StringBuilder* sb = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TextViewOOM$$Lambda$lambda$main$0$1::fieldInfos[2] = {
	{"sb", "Ljava/lang/StringBuilder;", nullptr, $PUBLIC, $field(TextViewOOM$$Lambda$lambda$main$0$1, sb)},
	{}
};
$MethodInfo TextViewOOM$$Lambda$lambda$main$0$1::methodInfos[3] = {
	{"<init>", "(Ljava/lang/StringBuilder;)V", nullptr, $PUBLIC, $method(static_cast<void(TextViewOOM$$Lambda$lambda$main$0$1::*)($StringBuilder*)>(&TextViewOOM$$Lambda$lambda$main$0$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TextViewOOM$$Lambda$lambda$main$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"TextViewOOM$$Lambda$lambda$main$0$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* TextViewOOM$$Lambda$lambda$main$0$1::load$($String* name, bool initialize) {
	$loadClass(TextViewOOM$$Lambda$lambda$main$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TextViewOOM$$Lambda$lambda$main$0$1::class$ = nullptr;

class TextViewOOM$$Lambda$dispose$2 : public $Runnable {
	$class(TextViewOOM$$Lambda$dispose$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$($Window* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->dispose();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TextViewOOM$$Lambda$dispose$2>());
	}
	$Window* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo TextViewOOM$$Lambda$dispose$2::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TextViewOOM$$Lambda$dispose$2, inst$)},
	{}
};
$MethodInfo TextViewOOM$$Lambda$dispose$2::methodInfos[3] = {
	{"<init>", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $method(static_cast<void(TextViewOOM$$Lambda$dispose$2::*)($Window*)>(&TextViewOOM$$Lambda$dispose$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TextViewOOM$$Lambda$dispose$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"TextViewOOM$$Lambda$dispose$2",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* TextViewOOM$$Lambda$dispose$2::load$($String* name, bool initialize) {
	$loadClass(TextViewOOM$$Lambda$dispose$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TextViewOOM$$Lambda$dispose$2::class$ = nullptr;

$FieldInfo _TextViewOOM_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(TextViewOOM, frame)},
	{"ta", "Ljavax/swing/JTextArea;", nullptr, $PRIVATE | $STATIC, $staticField(TextViewOOM, ta)},
	{"STRING", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TextViewOOM, STRING)},
	{"N", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TextViewOOM, N)},
	{}
};

$MethodInfo _TextViewOOM_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TextViewOOM::*)()>(&TextViewOOM::init$))},
	{"createAndShowGUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&TextViewOOM::createAndShowGUI))},
	{"lambda$main$0", "(Ljava/lang/StringBuilder;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($StringBuilder*)>(&TextViewOOM::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TextViewOOM::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _TextViewOOM_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TextViewOOM",
	"java.lang.Object",
	nullptr,
	_TextViewOOM_FieldInfo_,
	_TextViewOOM_MethodInfo_
};

$Object* allocate$TextViewOOM($Class* clazz) {
	return $of($alloc(TextViewOOM));
}

$JFrame* TextViewOOM::frame = nullptr;
$JTextArea* TextViewOOM::ta = nullptr;
$String* TextViewOOM::STRING = nullptr;

void TextViewOOM::init$() {
}

void TextViewOOM::createAndShowGUI() {
	$init(TextViewOOM);
	$assignStatic(TextViewOOM::frame, $new($JFrame));
	$var($JScrollPane, jScrollPane1, $new($JScrollPane));
	$assignStatic(TextViewOOM::ta, $new($JTextArea));
	$nc(TextViewOOM::ta)->setEditable(false);
	$nc(TextViewOOM::ta)->setColumns(20);
	$nc(TextViewOOM::ta)->setRows(5);
	jScrollPane1->setViewportView(TextViewOOM::ta);
	$nc(TextViewOOM::frame)->add(static_cast<$Component*>(TextViewOOM::ta));
	$nc(TextViewOOM::frame)->pack();
	$nc(TextViewOOM::frame)->setLocationRelativeTo(nullptr);
	$nc(TextViewOOM::frame)->setVisible(true);
}

void TextViewOOM::main($StringArray* args) {
	$init(TextViewOOM);
	$useLocalCurrentObjectStackCache();
	$EventQueue::invokeAndWait(static_cast<$Runnable*>($$new(TextViewOOM$$Lambda$createAndShowGUI)));
	for (int32_t i = 0; i < 10; ++i) {
		$System::gc();
		$Thread::sleep(1000);
	}
	int64_t var$0 = $nc($($Runtime::getRuntime()))->totalMemory();
	int64_t mem = var$0 - $nc($($Runtime::getRuntime()))->freeMemory();
	$nc($System::err)->println($$str({"Memory before creating the text: "_s, $$str(mem)}));
	$var($StringBuilder, sb, $new($StringBuilder, TextViewOOM::N * $nc(TextViewOOM::STRING)->length()));
	for (int32_t i = 0; i < TextViewOOM::N; ++i) {
		sb->append(TextViewOOM::STRING);
	}
	for (int32_t i = 0; i < 10; ++i) {
		$System::gc();
		$Thread::sleep(1000);
	}
	int64_t var$1 = $nc($($Runtime::getRuntime()))->totalMemory();
	mem = var$1 - $nc($($Runtime::getRuntime()))->freeMemory();
	$nc($System::err)->println($$str({"Memory after  creating the text: "_s, $$str(mem)}));
	$EventQueue::invokeAndWait(static_cast<$Runnable*>($$new(TextViewOOM$$Lambda$lambda$main$0$1, sb)));
	for (int32_t i = 0; i < 10; ++i) {
		$System::gc();
		$Thread::sleep(1000);
	}
	int64_t var$2 = $nc($($Runtime::getRuntime()))->totalMemory();
	mem = var$2 - $nc($($Runtime::getRuntime()))->freeMemory();
	$nc($System::err)->println($$str({"Final memory  after everything: "_s, $$str(mem)}));
	$EventQueue::invokeAndWait(static_cast<$Runnable*>($$new(TextViewOOM$$Lambda$dispose$2, static_cast<$JFrame*>($nc(TextViewOOM::frame)))));
}

void TextViewOOM::lambda$main$0($StringBuilder* sb) {
	$init(TextViewOOM);
	$useLocalCurrentObjectStackCache();
	$nc(TextViewOOM::ta)->setText($($nc(sb)->toString()));
	for (int32_t i = 0; i < 10; ++i) {
		$System::gc();
		try {
			$Thread::sleep(200);
		} catch ($InterruptedException& iex) {
		}
	}
	int64_t var$0 = $nc($($Runtime::getRuntime()))->totalMemory();
	int64_t mem1 = var$0 - $nc($($Runtime::getRuntime()))->freeMemory();
	$nc($System::err)->println($$str({"Memory after  setting the text: "_s, $$str(mem1)}));
}

TextViewOOM::TextViewOOM() {
}

void clinit$TextViewOOM($Class* class$) {
	$assignStatic(TextViewOOM::STRING, $cstr({0xDC00, 0x10BFF}));
}

$Class* TextViewOOM::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TextViewOOM$$Lambda$createAndShowGUI::classInfo$.name)) {
			return TextViewOOM$$Lambda$createAndShowGUI::load$(name, initialize);
		}
		if (name->equals(TextViewOOM$$Lambda$lambda$main$0$1::classInfo$.name)) {
			return TextViewOOM$$Lambda$lambda$main$0$1::load$(name, initialize);
		}
		if (name->equals(TextViewOOM$$Lambda$dispose$2::classInfo$.name)) {
			return TextViewOOM$$Lambda$dispose$2::load$(name, initialize);
		}
	}
	$loadClass(TextViewOOM, name, initialize, &_TextViewOOM_ClassInfo_, clinit$TextViewOOM, allocate$TextViewOOM);
	return class$;
}

$Class* TextViewOOM::class$ = nullptr;