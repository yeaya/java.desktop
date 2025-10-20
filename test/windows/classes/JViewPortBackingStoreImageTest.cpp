#include <JViewPortBackingStoreImageTest.h>

#include <JViewPortBackingStoreImageTest$1.h>
#include <JViewPortBackingStoreImageTest$2.h>
#include <JViewPortBackingStoreImageTest$AttributedContent.h>
#include <JViewPortBackingStoreImageTest$Paragraph.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/GridBagConstraints.h>
#include <java/awt/GridBagLayout.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowListener.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
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
#include <java/util/HashMap.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <java/util/concurrent/TimeUnit.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/JTextPane.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/DefaultStyledDocument.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/Style.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/StyleContext.h>
#include <javax/swing/text/StyledDocument.h>
#include <jcpp.h>

#undef ALIGN_CENTER
#undef BACKINGSTORE_SCROLL_MODE
#undef DEFAULT_STYLE
#undef HORIZONTAL
#undef INSTRUCTIONS
#undef MINUTES

using $JViewPortBackingStoreImageTest$1 = ::JViewPortBackingStoreImageTest$1;
using $JViewPortBackingStoreImageTest$2 = ::JViewPortBackingStoreImageTest$2;
using $JViewPortBackingStoreImageTest$AttributedContent = ::JViewPortBackingStoreImageTest$AttributedContent;
using $JViewPortBackingStoreImageTest$Paragraph = ::JViewPortBackingStoreImageTest$Paragraph;
using $JViewPortBackingStoreImageTest$AttributedContentArray = $Array<JViewPortBackingStoreImageTest$AttributedContent>;
using $JViewPortBackingStoreImageTest$ParagraphArray = $Array<JViewPortBackingStoreImageTest$Paragraph>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $GridBagConstraints = ::java::awt::GridBagConstraints;
using $GridBagLayout = ::java::awt::GridBagLayout;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Window = ::java::awt::Window;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowListener = ::java::awt::event::WindowListener;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $HashMap = ::java::util::HashMap;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTextArea = ::javax::swing::JTextArea;
using $JTextPane = ::javax::swing::JTextPane;
using $JViewport = ::javax::swing::JViewport;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $AbstractDocument = ::javax::swing::text::AbstractDocument;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $DefaultStyledDocument = ::javax::swing::text::DefaultStyledDocument;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $Style = ::javax::swing::text::Style;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $StyleContext = ::javax::swing::text::StyleContext;
using $StyledDocument = ::javax::swing::text::StyledDocument;

class JViewPortBackingStoreImageTest$$Lambda$createUI : public $Runnable {
	$class(JViewPortBackingStoreImageTest$$Lambda$createUI, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		JViewPortBackingStoreImageTest::createUI();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JViewPortBackingStoreImageTest$$Lambda$createUI>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JViewPortBackingStoreImageTest$$Lambda$createUI::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JViewPortBackingStoreImageTest$$Lambda$createUI::*)()>(&JViewPortBackingStoreImageTest$$Lambda$createUI::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo JViewPortBackingStoreImageTest$$Lambda$createUI::classInfo$ = {
	$PUBLIC | $FINAL,
	"JViewPortBackingStoreImageTest$$Lambda$createUI",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* JViewPortBackingStoreImageTest$$Lambda$createUI::load$($String* name, bool initialize) {
	$loadClass(JViewPortBackingStoreImageTest$$Lambda$createUI, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JViewPortBackingStoreImageTest$$Lambda$createUI::class$ = nullptr;

class JViewPortBackingStoreImageTest$$Lambda$lambda$createUI$0$1 : public $ActionListener {
	$class(JViewPortBackingStoreImageTest$$Lambda$lambda$createUI$0$1, $NO_CLASS_INIT, $ActionListener)
public:
	void init$($JFrame* mainFrame) {
		$set(this, mainFrame, mainFrame);
	}
	virtual void actionPerformed($ActionEvent* e) override {
		JViewPortBackingStoreImageTest::lambda$createUI$0(mainFrame, e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JViewPortBackingStoreImageTest$$Lambda$lambda$createUI$0$1>());
	}
	$JFrame* mainFrame = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JViewPortBackingStoreImageTest$$Lambda$lambda$createUI$0$1::fieldInfos[2] = {
	{"mainFrame", "Ljavax/swing/JFrame;", nullptr, $PUBLIC, $field(JViewPortBackingStoreImageTest$$Lambda$lambda$createUI$0$1, mainFrame)},
	{}
};
$MethodInfo JViewPortBackingStoreImageTest$$Lambda$lambda$createUI$0$1::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/JFrame;)V", nullptr, $PUBLIC, $method(static_cast<void(JViewPortBackingStoreImageTest$$Lambda$lambda$createUI$0$1::*)($JFrame*)>(&JViewPortBackingStoreImageTest$$Lambda$lambda$createUI$0$1::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo JViewPortBackingStoreImageTest$$Lambda$lambda$createUI$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"JViewPortBackingStoreImageTest$$Lambda$lambda$createUI$0$1",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	fieldInfos,
	methodInfos
};
$Class* JViewPortBackingStoreImageTest$$Lambda$lambda$createUI$0$1::load$($String* name, bool initialize) {
	$loadClass(JViewPortBackingStoreImageTest$$Lambda$lambda$createUI$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JViewPortBackingStoreImageTest$$Lambda$lambda$createUI$0$1::class$ = nullptr;

$FieldInfo _JViewPortBackingStoreImageTest_FieldInfo_[] = {
	{"testResult", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(JViewPortBackingStoreImageTest, testResult)},
	{"countDownLatch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(JViewPortBackingStoreImageTest, countDownLatch)},
	{"INSTRUCTIONS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JViewPortBackingStoreImageTest, INSTRUCTIONS)},
	{"doc", "Ljavax/swing/text/DefaultStyledDocument;", nullptr, $PRIVATE | $STATIC, $staticField(JViewPortBackingStoreImageTest, doc)},
	{"styles", "Ljavax/swing/text/StyleContext;", nullptr, $PRIVATE | $STATIC, $staticField(JViewPortBackingStoreImageTest, styles)},
	{"contentAttributes", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljavax/swing/text/Style;>;", $PRIVATE | $STATIC, $staticField(JViewPortBackingStoreImageTest, contentAttributes)},
	{"data", "[LJViewPortBackingStoreImageTest$Paragraph;", nullptr, $PRIVATE | $STATIC, $staticField(JViewPortBackingStoreImageTest, data)},
	{}
};

$MethodInfo _JViewPortBackingStoreImageTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JViewPortBackingStoreImageTest::*)()>(&JViewPortBackingStoreImageTest::init$))},
	{"addParagraph", "(LJViewPortBackingStoreImageTest$Paragraph;)V", nullptr, $STATIC, $method(static_cast<void(*)($JViewPortBackingStoreImageTest$Paragraph*)>(&JViewPortBackingStoreImageTest::addParagraph))},
	{"createComponent", "()Ljavax/swing/JComponent;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$JComponent*(*)()>(&JViewPortBackingStoreImageTest::createComponent))},
	{"createStyles", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&JViewPortBackingStoreImageTest::createStyles))},
	{"createUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&JViewPortBackingStoreImageTest::createUI))},
	{"lambda$createUI$0", "(Ljavax/swing/JFrame;Ljava/awt/event/ActionEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($JFrame*,$ActionEvent*)>(&JViewPortBackingStoreImageTest::lambda$createUI$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&JViewPortBackingStoreImageTest::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _JViewPortBackingStoreImageTest_InnerClassesInfo_[] = {
	{"JViewPortBackingStoreImageTest$AttributedContent", "JViewPortBackingStoreImageTest", "AttributedContent", $STATIC},
	{"JViewPortBackingStoreImageTest$Paragraph", "JViewPortBackingStoreImageTest", "Paragraph", $STATIC},
	{"JViewPortBackingStoreImageTest$2", nullptr, nullptr, 0},
	{"JViewPortBackingStoreImageTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JViewPortBackingStoreImageTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"JViewPortBackingStoreImageTest",
	"java.lang.Object",
	nullptr,
	_JViewPortBackingStoreImageTest_FieldInfo_,
	_JViewPortBackingStoreImageTest_MethodInfo_,
	nullptr,
	nullptr,
	_JViewPortBackingStoreImageTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"JViewPortBackingStoreImageTest$AttributedContent,JViewPortBackingStoreImageTest$Paragraph,JViewPortBackingStoreImageTest$2,JViewPortBackingStoreImageTest$1"
};

$Object* allocate$JViewPortBackingStoreImageTest($Class* clazz) {
	return $of($alloc(JViewPortBackingStoreImageTest));
}

$volatile(bool) JViewPortBackingStoreImageTest::testResult = false;
$volatile($CountDownLatch*) JViewPortBackingStoreImageTest::countDownLatch = nullptr;
$String* JViewPortBackingStoreImageTest::INSTRUCTIONS = nullptr;
$DefaultStyledDocument* JViewPortBackingStoreImageTest::doc = nullptr;
$StyleContext* JViewPortBackingStoreImageTest::styles = nullptr;
$HashMap* JViewPortBackingStoreImageTest::contentAttributes = nullptr;
$JViewPortBackingStoreImageTest$ParagraphArray* JViewPortBackingStoreImageTest::data = nullptr;

void JViewPortBackingStoreImageTest::init$() {
}

void JViewPortBackingStoreImageTest::main($StringArray* args) {
	$init(JViewPortBackingStoreImageTest);
	$assignStatic(JViewPortBackingStoreImageTest::countDownLatch, $new($CountDownLatch, 1));
	$SwingUtilities::invokeLater(static_cast<$Runnable*>($$new(JViewPortBackingStoreImageTest$$Lambda$createUI)));
	$init($TimeUnit);
	$nc(JViewPortBackingStoreImageTest::countDownLatch)->await(15, $TimeUnit::MINUTES);
	if (!JViewPortBackingStoreImageTest::testResult) {
		$throwNew($RuntimeException, "Test fails!"_s);
	}
}

void JViewPortBackingStoreImageTest::createUI() {
	$init(JViewPortBackingStoreImageTest);
	$useLocalCurrentObjectStackCache();
	try {
		$UIManager::setLookAndFeel("javax.swing.plaf.nimbus.NimbusLookAndFeel"_s);
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
	$var($JFrame, mainFrame, $new($JFrame));
	$var($GridBagLayout, layout, $new($GridBagLayout));
	$var($JPanel, mainControlPanel, $new($JPanel, static_cast<$LayoutManager*>(layout)));
	$var($JPanel, resultButtonPanel, $new($JPanel, static_cast<$LayoutManager*>(layout)));
	$var($GridBagConstraints, gbc, $new($GridBagConstraints));
	gbc->gridx = 0;
	gbc->gridy = 0;
	$set(gbc, insets, $new($Insets, 5, 15, 5, 15));
	gbc->fill = $GridBagConstraints::HORIZONTAL;
	mainControlPanel->add($(static_cast<$Component*>(createComponent())), $of(gbc));
	$var($JTextArea, instructionTextArea, $new($JTextArea));
	instructionTextArea->setText(JViewPortBackingStoreImageTest::INSTRUCTIONS);
	instructionTextArea->setEditable(false);
	$init($Color);
	instructionTextArea->setBackground($Color::white);
	gbc->gridx = 0;
	gbc->gridy = 1;
	gbc->fill = $GridBagConstraints::HORIZONTAL;
	mainControlPanel->add(static_cast<$Component*>(instructionTextArea), $of(gbc));
	$var($JButton, passButton, $new($JButton, "Pass"_s));
	passButton->setActionCommand("Pass"_s);
	passButton->addActionListener(static_cast<$ActionListener*>($$new(JViewPortBackingStoreImageTest$$Lambda$lambda$createUI$0$1, mainFrame)));
	$var($JButton, failButton, $new($JButton, "Fail"_s));
	failButton->setActionCommand("Fail"_s);
	failButton->addActionListener($$new($JViewPortBackingStoreImageTest$1, mainFrame));
	gbc->gridx = 0;
	gbc->gridy = 0;
	resultButtonPanel->add(static_cast<$Component*>(passButton), $of(gbc));
	gbc->gridx = 1;
	gbc->gridy = 0;
	resultButtonPanel->add(static_cast<$Component*>(failButton), $of(gbc));
	gbc->gridx = 0;
	gbc->gridy = 2;
	mainControlPanel->add(static_cast<$Component*>(resultButtonPanel), $of(gbc));
	mainFrame->add(static_cast<$Component*>(mainControlPanel));
	mainFrame->pack();
	mainFrame->addWindowListener($$new($JViewPortBackingStoreImageTest$2, mainFrame));
	mainFrame->setVisible(true);
}

$JComponent* JViewPortBackingStoreImageTest::createComponent() {
	$init(JViewPortBackingStoreImageTest);
	$useLocalCurrentObjectStackCache();
	createStyles();
	for (int32_t i = 0; i < $nc(JViewPortBackingStoreImageTest::data)->length; ++i) {
		$var($JViewPortBackingStoreImageTest$Paragraph, p, $nc(JViewPortBackingStoreImageTest::data)->get(i));
		addParagraph(p);
	}
	$var($JTextPane, textPane, $new($JTextPane, JViewPortBackingStoreImageTest::doc));
	$var($JScrollPane, scroller, $new($JScrollPane));
	$var($JViewport, port, scroller->getViewport());
	$nc(port)->setScrollMode($JViewport::BACKINGSTORE_SCROLL_MODE);
	port->add(static_cast<$Component*>(textPane));
	return scroller;
}

void JViewPortBackingStoreImageTest::createStyles() {
	$init(JViewPortBackingStoreImageTest);
	$useLocalCurrentObjectStackCache();
	$assignStatic(JViewPortBackingStoreImageTest::styles, $new($StyleContext));
	$assignStatic(JViewPortBackingStoreImageTest::doc, $new($DefaultStyledDocument, JViewPortBackingStoreImageTest::styles));
	$assignStatic(JViewPortBackingStoreImageTest::contentAttributes, $new($HashMap));
	$var($Style, s, $nc(JViewPortBackingStoreImageTest::styles)->addStyle(nullptr, nullptr));
	$nc(JViewPortBackingStoreImageTest::contentAttributes)->put("none"_s, s);
	$var($Style, def, $nc(JViewPortBackingStoreImageTest::styles)->getStyle($StyleContext::DEFAULT_STYLE));
	$var($Style, heading, $nc(JViewPortBackingStoreImageTest::styles)->addStyle("heading"_s, def));
	$StyleConstants::setFontFamily(heading, "SansSerif"_s);
	$StyleConstants::setBold(heading, true);
	$StyleConstants::setAlignment(heading, $StyleConstants::ALIGN_CENTER);
	$StyleConstants::setSpaceAbove(heading, (float)10);
	$StyleConstants::setSpaceBelow(heading, (float)10);
	$StyleConstants::setFontSize(heading, 18);
	$var($Style, sty, $nc(JViewPortBackingStoreImageTest::styles)->addStyle("title"_s, heading));
	$StyleConstants::setFontSize(sty, 32);
	$assign(sty, $nc(JViewPortBackingStoreImageTest::styles)->addStyle("author"_s, heading));
	$StyleConstants::setItalic(sty, true);
	$StyleConstants::setSpaceBelow(sty, (float)25);
}

void JViewPortBackingStoreImageTest::addParagraph($JViewPortBackingStoreImageTest$Paragraph* p) {
	$init(JViewPortBackingStoreImageTest);
	$useLocalCurrentObjectStackCache();
	try {
		$var($Style, s, nullptr);
		for (int32_t i = 0; i < $nc($nc(p)->data)->length; ++i) {
			$var($JViewPortBackingStoreImageTest$AttributedContent, run, $nc(p->data)->get(i));
			$assign(s, $cast($Style, $nc(JViewPortBackingStoreImageTest::contentAttributes)->get($nc(run)->attr)));
			$nc(JViewPortBackingStoreImageTest::doc)->insertString($nc(JViewPortBackingStoreImageTest::doc)->getLength(), $nc(run)->content, s);
		}
		$var($Style, ls, $nc(JViewPortBackingStoreImageTest::styles)->getStyle($nc(p)->logical));
		$nc(JViewPortBackingStoreImageTest::doc)->setLogicalStyle($nc(JViewPortBackingStoreImageTest::doc)->getLength() - 1, ls);
		$nc(JViewPortBackingStoreImageTest::doc)->insertString($nc(JViewPortBackingStoreImageTest::doc)->getLength(), "\n"_s, nullptr);
	} catch ($BadLocationException&) {
		$var($BadLocationException, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

void JViewPortBackingStoreImageTest::lambda$createUI$0($JFrame* mainFrame, $ActionEvent* e) {
	$init(JViewPortBackingStoreImageTest);
	JViewPortBackingStoreImageTest::testResult = true;
	$nc(mainFrame)->dispose();
	$nc(JViewPortBackingStoreImageTest::countDownLatch)->countDown();
}

void clinit$JViewPortBackingStoreImageTest($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(JViewPortBackingStoreImageTest::INSTRUCTIONS, "INSTRUCTIONS:\n\nVerify text is drawn with high resolution and text selection is not shifted when JViewPort is used on HiDPI display.\n\nIf the display does not support HiDPI mode press PASS.\n\n1. Check that the text does not have low resolution.\nIf no, press FAIL.\n\n2. Select the current text from the end to the beginning.\n\nIf the text is slightly shiftted from one side to another\nand back during selection press Fail.\nOtherwise, press Pass."_s);
	JViewPortBackingStoreImageTest::testResult = false;
	$assignStatic(JViewPortBackingStoreImageTest::data, $new($JViewPortBackingStoreImageTest$ParagraphArray, {
		$$new($JViewPortBackingStoreImageTest$Paragraph, "title"_s, $$new($JViewPortBackingStoreImageTest$AttributedContentArray, {$$new($JViewPortBackingStoreImageTest$AttributedContent, "none"_s, "ALICE\'S ADVENTURES IN WONDERLAND"_s)})),
		$$new($JViewPortBackingStoreImageTest$Paragraph, "author"_s, $$new($JViewPortBackingStoreImageTest$AttributedContentArray, {$$new($JViewPortBackingStoreImageTest$AttributedContent, "none"_s, "Lewis Carroll"_s)})),
		$$new($JViewPortBackingStoreImageTest$Paragraph, "heading"_s, $$new($JViewPortBackingStoreImageTest$AttributedContentArray, {$$new($JViewPortBackingStoreImageTest$AttributedContent, "alice"_s, " "_s)}))
	}));
}

JViewPortBackingStoreImageTest::JViewPortBackingStoreImageTest() {
}

$Class* JViewPortBackingStoreImageTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(JViewPortBackingStoreImageTest$$Lambda$createUI::classInfo$.name)) {
			return JViewPortBackingStoreImageTest$$Lambda$createUI::load$(name, initialize);
		}
		if (name->equals(JViewPortBackingStoreImageTest$$Lambda$lambda$createUI$0$1::classInfo$.name)) {
			return JViewPortBackingStoreImageTest$$Lambda$lambda$createUI$0$1::load$(name, initialize);
		}
	}
	$loadClass(JViewPortBackingStoreImageTest, name, initialize, &_JViewPortBackingStoreImageTest_ClassInfo_, clinit$JViewPortBackingStoreImageTest, allocate$JViewPortBackingStoreImageTest);
	return class$;
}

$Class* JViewPortBackingStoreImageTest::class$ = nullptr;