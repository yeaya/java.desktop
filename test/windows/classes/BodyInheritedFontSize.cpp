#include <BodyInheritedFontSize.h>

#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/Window.h>
#include <java/io/PrintStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Iterable.h>
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
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <java/util/function/Consumer.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/text/AbstractDocument$AbstractElement.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/EditorKit.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/GlyphView.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/StyledEditorKit.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/html/HTMLEditorKit.h>
#include <javax/swing/text/html/StyleSheet.h>
#include <jcpp.h>

#undef CENTER
#undef DISPOSE_ON_CLOSE
#undef HTML_TEXT
#undef TRUE
#undef W3C_LENGTH_UNITS

using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $Window = ::java::awt::Window;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $Consumer = ::java::util::function::Consumer;
using $JComponent = ::javax::swing::JComponent;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JFrame = ::javax::swing::JFrame;
using $JScrollPane = ::javax::swing::JScrollPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $TextUI = ::javax::swing::plaf::TextUI;
using $AbstractDocument$AbstractElement = ::javax::swing::text::AbstractDocument$AbstractElement;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $Document = ::javax::swing::text::Document;
using $EditorKit = ::javax::swing::text::EditorKit;
using $Element = ::javax::swing::text::Element;
using $GlyphView = ::javax::swing::text::GlyphView;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $StyledEditorKit = ::javax::swing::text::StyledEditorKit;
using $View = ::javax::swing::text::View;
using $HTMLEditorKit = ::javax::swing::text::html::HTMLEditorKit;
using $StyleSheet = ::javax::swing::text::html::StyleSheet;

class BodyInheritedFontSize$$Lambda$lambda$main$0 : public $Runnable {
	$class(BodyInheritedFontSize$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(bool showFrame, bool debugPrint, $List* exceptions) {
		this->showFrame = showFrame;
		this->debugPrint = debugPrint;
		$set(this, exceptions, exceptions);
	}
	virtual void run() override {
		BodyInheritedFontSize::lambda$main$0(showFrame, debugPrint, exceptions);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BodyInheritedFontSize$$Lambda$lambda$main$0>());
	}
	bool showFrame = false;
	bool debugPrint = false;
	$List* exceptions = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo BodyInheritedFontSize$$Lambda$lambda$main$0::fieldInfos[4] = {
	{"showFrame", "Z", nullptr, $PUBLIC, $field(BodyInheritedFontSize$$Lambda$lambda$main$0, showFrame)},
	{"debugPrint", "Z", nullptr, $PUBLIC, $field(BodyInheritedFontSize$$Lambda$lambda$main$0, debugPrint)},
	{"exceptions", "Ljava/util/List;", nullptr, $PUBLIC, $field(BodyInheritedFontSize$$Lambda$lambda$main$0, exceptions)},
	{}
};
$MethodInfo BodyInheritedFontSize$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "(ZZLjava/util/List;)V", nullptr, $PUBLIC, $method(static_cast<void(BodyInheritedFontSize$$Lambda$lambda$main$0::*)(bool,bool,$List*)>(&BodyInheritedFontSize$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo BodyInheritedFontSize$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"BodyInheritedFontSize$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* BodyInheritedFontSize$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(BodyInheritedFontSize$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* BodyInheritedFontSize$$Lambda$lambda$main$0::class$ = nullptr;

class BodyInheritedFontSize$$Lambda$println$1 : public $Consumer {
	$class(BodyInheritedFontSize$$Lambda$println$1, $NO_CLASS_INIT, $Consumer)
public:
	void init$($PrintStream* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* arg0) override {
		$nc(inst$)->println(arg0);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BodyInheritedFontSize$$Lambda$println$1>());
	}
	$PrintStream* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo BodyInheritedFontSize$$Lambda$println$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(BodyInheritedFontSize$$Lambda$println$1, inst$)},
	{}
};
$MethodInfo BodyInheritedFontSize$$Lambda$println$1::methodInfos[3] = {
	{"<init>", "(Ljava/io/PrintStream;)V", nullptr, $PUBLIC, $method(static_cast<void(BodyInheritedFontSize$$Lambda$println$1::*)($PrintStream*)>(&BodyInheritedFontSize$$Lambda$println$1::init$))},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo BodyInheritedFontSize$$Lambda$println$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"BodyInheritedFontSize$$Lambda$println$1",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* BodyInheritedFontSize$$Lambda$println$1::load$($String* name, bool initialize) {
	$loadClass(BodyInheritedFontSize$$Lambda$println$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* BodyInheritedFontSize$$Lambda$println$1::class$ = nullptr;

$FieldInfo _BodyInheritedFontSize_FieldInfo_[] = {
	{"HTML_TEXT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BodyInheritedFontSize, HTML_TEXT)},
	{}
};

$MethodInfo _BodyInheritedFontSize_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BodyInheritedFontSize::*)()>(&BodyInheritedFontSize::init$))},
	{"checkFontSize", "(Ljavax/swing/JEditorPane;ZZ)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($JEditorPane*,bool,bool)>(&BodyInheritedFontSize::checkFontSize))},
	{"createEditorPane", "(ZZ)Ljavax/swing/JEditorPane;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$JEditorPane*(*)(bool,bool)>(&BodyInheritedFontSize::createEditorPane))},
	{"findFirstTextRun", "(Ljavax/swing/text/View;)Ljavax/swing/text/GlyphView;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$GlyphView*(*)($View*)>(&BodyInheritedFontSize::findFirstTextRun))},
	{"getViewFontSize", "(Ljavax/swing/text/View;Z)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($View*,bool)>(&BodyInheritedFontSize::getViewFontSize))},
	{"lambda$main$0", "(ZZLjava/util/List;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(bool,bool,$List*)>(&BodyInheritedFontSize::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&BodyInheritedFontSize::main)), "java.lang.Exception"},
	{"toDebugPrint", "(Ljava/util/List;)Z", "(Ljava/util/List<Ljava/lang/String;>;)Z", $PRIVATE | $STATIC, $method(static_cast<bool(*)($List*)>(&BodyInheritedFontSize::toDebugPrint))},
	{"toShowFrame", "(Ljava/util/List;)Z", "(Ljava/util/List<Ljava/lang/String;>;)Z", $PRIVATE | $STATIC, $method(static_cast<bool(*)($List*)>(&BodyInheritedFontSize::toShowFrame))},
	{}
};

$ClassInfo _BodyInheritedFontSize_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"BodyInheritedFontSize",
	"java.lang.Object",
	nullptr,
	_BodyInheritedFontSize_FieldInfo_,
	_BodyInheritedFontSize_MethodInfo_
};

$Object* allocate$BodyInheritedFontSize($Class* clazz) {
	return $of($alloc(BodyInheritedFontSize));
}

$String* BodyInheritedFontSize::HTML_TEXT = nullptr;

void BodyInheritedFontSize::init$() {
}

$JEditorPane* BodyInheritedFontSize::createEditorPane(bool w3cUnits, bool showFrame) {
	$init(BodyInheritedFontSize);
	$useLocalCurrentObjectStackCache();
	$var($JEditorPane, htmlPane, $new($JEditorPane));
	htmlPane->setEditable(false);
	if (w3cUnits) {
		$init($Boolean);
		htmlPane->putClientProperty($JEditorPane::W3C_LENGTH_UNITS, $Boolean::TRUE);
	}
	$var($HTMLEditorKit, kit, $new($HTMLEditorKit));
	htmlPane->setEditorKit(kit);
	$var($StyleSheet, styleSheet, kit->getStyleSheet());
	$nc(styleSheet)->addRule("body { font-family: sans-serif; font-size: 16pt; }"_s);
	$var($Document, doc, kit->createDefaultDocument());
	htmlPane->setDocument(doc);
	htmlPane->setText(BodyInheritedFontSize::HTML_TEXT);
	if (showFrame) {
		$var($JFrame, frame, $new($JFrame, $$str({"HtmlFontSizeGUITest: "_s, (w3cUnits ? "w3c"_s : "std"_s)})));
		frame->setDefaultCloseOperation($JFrame::DISPOSE_ON_CLOSE);
		$init($BorderLayout);
		frame->add(static_cast<$Component*>($$new($JScrollPane, htmlPane)), $of($BorderLayout::CENTER));
		frame->setLocationRelativeTo(nullptr);
		frame->pack();
		frame->setVisible(true);
	}
	htmlPane->getPreferredSize();
	return htmlPane;
}

void BodyInheritedFontSize::main($StringArray* args) {
	$init(BodyInheritedFontSize);
	$useLocalCurrentObjectStackCache();
	$var($List, argsList, $Arrays::asList(args));
	bool showFrame = toShowFrame(argsList);
	bool debugPrint = toDebugPrint(argsList);
	$var($List, exceptions, $new($ArrayList, 2));
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(BodyInheritedFontSize$$Lambda$lambda$main$0, showFrame, debugPrint, exceptions)));
	if (exceptions->size() > 0) {
		$init($System);
		exceptions->forEach(static_cast<$Consumer*>($$new(BodyInheritedFontSize$$Lambda$println$1, static_cast<$PrintStream*>($nc($System::err)))));
		$var($String, var$0, $str({"Test failed: "_s, $($nc(($cast($Exception, $(exceptions->get(0)))))->getMessage())}));
		$throwNew($RuntimeException, var$0, $cast($Throwable, $(exceptions->get(0))));
	}
}

bool BodyInheritedFontSize::toShowFrame($List* argsList) {
	$init(BodyInheritedFontSize);
	return $nc(argsList)->contains("-show"_s);
}

bool BodyInheritedFontSize::toDebugPrint($List* argsList) {
	$init(BodyInheritedFontSize);
	return $nc(argsList)->contains("-print"_s);
}

void BodyInheritedFontSize::checkFontSize($JEditorPane* htmlPane, bool w3cUnits, bool debugPrint) {
	$init(BodyInheritedFontSize);
	$useLocalCurrentObjectStackCache();
	$var($View, rootView, $nc($($cast($TextUI, $nc(htmlPane)->getUI())))->getRootView(htmlPane));
	$var($View, boxView, $nc(rootView)->getView(0));
	$var($View, bodyView, $nc(boxView)->getView(1));
	int32_t fontSizePercentage = getViewFontSize($($nc(bodyView)->getView(0)), debugPrint);
	int32_t fontSizeInherited = getViewFontSize($($nc(bodyView)->getView(1)), debugPrint);
	int32_t fontSizeExplicit = getViewFontSize($($nc(bodyView)->getView(2)), debugPrint);
	if (debugPrint) {
		$init($System);
		$nc($System::out)->println($$str({"w3cUnits: "_s, $$str(w3cUnits), "\nPercentage: "_s, $$str(fontSizePercentage), "\nInherited: "_s, $$str(fontSizeInherited), "\nExplicit: "_s, $$str(fontSizeExplicit), "\n"_s}));
	}
	if (fontSizeInherited != fontSizeExplicit || fontSizePercentage != fontSizeExplicit) {
		$throwNew($RuntimeException, $$str({"The font size is different with "_s, (w3cUnits ? "w3cUnits"_s : "stdUnits"_s), ": Percentage: "_s, $$str(fontSizePercentage), " vs. Inherited: "_s, $$str(fontSizeInherited), " vs. Explicit: "_s, $$str(fontSizeExplicit)}));
	}
}

int32_t BodyInheritedFontSize::getViewFontSize($View* paragraphView, bool debugPrint) {
	$init(BodyInheritedFontSize);
	$useLocalCurrentObjectStackCache();
	$var($GlyphView, inlineView, findFirstTextRun(paragraphView));
	int32_t fontSize = $nc($($nc(inlineView)->getFont()))->getSize();
	if (debugPrint) {
		$init($System);
		$nc(($cast($AbstractDocument$AbstractElement, $(inlineView->getElement()))))->dump($System::out, 1);
	}
	return fontSize;
}

$GlyphView* BodyInheritedFontSize::findFirstTextRun($View* view) {
	$init(BodyInheritedFontSize);
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($GlyphView, view)) {
		return $cast($GlyphView, view);
	}
	for (int32_t i = 0; i < $nc(view)->getViewCount(); ++i) {
		$var($GlyphView, textRun, findFirstTextRun($(view->getView(i))));
		if (textRun != nullptr) {
			return textRun;
		}
	}
	return nullptr;
}

void BodyInheritedFontSize::lambda$main$0(bool showFrame, bool debugPrint, $List* exceptions) {
	$init(BodyInheritedFontSize);
	$useLocalCurrentObjectStackCache();
	{
		$var($booleans, arr$, $new($booleans, {
			true,
			false
		}));
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			bool w3cUnits = arr$->get(i$);
			{
				$var($JEditorPane, htmlPane, createEditorPane(w3cUnits, showFrame));
				try {
					checkFontSize(htmlPane, w3cUnits, debugPrint);
				} catch ($Exception&) {
					$var($Exception, e, $catch());
					$nc(exceptions)->add(e);
				}
			}
		}
	}
}

BodyInheritedFontSize::BodyInheritedFontSize() {
}

void clinit$BodyInheritedFontSize($Class* class$) {
	$assignStatic(BodyInheritedFontSize::HTML_TEXT, "<html>\n<body>\n  <p style=\"font-size: 100%\">100% from body</p>\n  <p>16pt inherited from body</p>\n  <p style=\"font-size: 16pt\">16pt paragraph</p>\n</body>\n</html>\n"_s);
}

$Class* BodyInheritedFontSize::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(BodyInheritedFontSize$$Lambda$lambda$main$0::classInfo$.name)) {
			return BodyInheritedFontSize$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(BodyInheritedFontSize$$Lambda$println$1::classInfo$.name)) {
			return BodyInheritedFontSize$$Lambda$println$1::load$(name, initialize);
		}
	}
	$loadClass(BodyInheritedFontSize, name, initialize, &_BodyInheritedFontSize_ClassInfo_, clinit$BodyInheritedFontSize, allocate$BodyInheritedFontSize);
	return class$;
}

$Class* BodyInheritedFontSize::class$ = nullptr;