#include <TestDialog4FileChooserTest.h>

#include <TestDialog4FileChooserTest$1.h>
#include <TestDialog4FileChooserTest$2.h>
#include <TestDialog4FileChooserTest$3.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dialog.h>
#include <java/awt/Frame.h>
#include <java/awt/Panel.h>
#include <java/awt/TextArea.h>
#include <java/awt/TextComponent.h>
#include <java/awt/event/ActionListener.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDialog.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef SCROLLBARS_BOTH

using $TestDialog4FileChooserTest$1 = ::TestDialog4FileChooserTest$1;
using $TestDialog4FileChooserTest$2 = ::TestDialog4FileChooserTest$2;
using $TestDialog4FileChooserTest$3 = ::TestDialog4FileChooserTest$3;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Frame = ::java::awt::Frame;
using $Panel = ::java::awt::Panel;
using $TextArea = ::java::awt::TextArea;
using $TextComponent = ::java::awt::TextComponent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JDialog = ::javax::swing::JDialog;
using $JFrame = ::javax::swing::JFrame;

$FieldInfo _TestDialog4FileChooserTest_FieldInfo_[] = {
	{"instructionsText", "Ljava/awt/TextArea;", nullptr, $PRIVATE, $field(TestDialog4FileChooserTest, instructionsText)},
	{"messageText", "Ljava/awt/TextArea;", nullptr, $PRIVATE, $field(TestDialog4FileChooserTest, messageText)},
	{"maxStringLength", "I", nullptr, $PRIVATE, $field(TestDialog4FileChooserTest, maxStringLength)},
	{"buttonP", "Ljava/awt/Panel;", nullptr, $PRIVATE, $field(TestDialog4FileChooserTest, buttonP)},
	{"run", "Ljavax/swing/JButton;", nullptr, $PRIVATE, $field(TestDialog4FileChooserTest, run)},
	{"passB", "Ljavax/swing/JButton;", nullptr, $PRIVATE, $field(TestDialog4FileChooserTest, passB)},
	{"failB", "Ljavax/swing/JButton;", nullptr, $PRIVATE, $field(TestDialog4FileChooserTest, failB)},
	{}
};

$MethodInfo _TestDialog4FileChooserTest_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JFrame;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(TestDialog4FileChooserTest::*)($JFrame*,$String*)>(&TestDialog4FileChooserTest::init$))},
	{"displayMessage", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"printInstructions", "([Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TestDialog4FileChooserTest_InnerClassesInfo_[] = {
	{"TestDialog4FileChooserTest$3", nullptr, nullptr, 0},
	{"TestDialog4FileChooserTest$2", nullptr, nullptr, 0},
	{"TestDialog4FileChooserTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestDialog4FileChooserTest_ClassInfo_ = {
	$ACC_SUPER,
	"TestDialog4FileChooserTest",
	"javax.swing.JDialog",
	nullptr,
	_TestDialog4FileChooserTest_FieldInfo_,
	_TestDialog4FileChooserTest_MethodInfo_,
	nullptr,
	nullptr,
	_TestDialog4FileChooserTest_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TestDialog4FileChooserTest$3,TestDialog4FileChooserTest$2,TestDialog4FileChooserTest$1"
};

$Object* allocate$TestDialog4FileChooserTest($Class* clazz) {
	return $of($alloc(TestDialog4FileChooserTest));
}

void TestDialog4FileChooserTest::init$($JFrame* frame, $String* name) {
	$useLocalCurrentObjectStackCache();
	$JDialog::init$(static_cast<$Frame*>(frame), name);
	this->maxStringLength = 80;
	$set(this, buttonP, $new($Panel));
	$set(this, run, $new($JButton, "Run"_s));
	$set(this, passB, $new($JButton, "Pass"_s));
	$set(this, failB, $new($JButton, "Fail"_s));
	$nc(frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	int32_t scrollBoth = $TextArea::SCROLLBARS_BOTH;
	$set(this, instructionsText, $new($TextArea, ""_s, 15, this->maxStringLength, scrollBoth));
	add("North"_s, static_cast<$Component*>(this->instructionsText));
	$set(this, messageText, $new($TextArea, ""_s, 5, this->maxStringLength, scrollBoth));
	add("Center"_s, static_cast<$Component*>(this->messageText));
	$nc(this->buttonP)->add("East"_s, static_cast<$Component*>(this->run));
	$nc(this->buttonP)->add("East"_s, static_cast<$Component*>(this->passB));
	$nc(this->buttonP)->add("West"_s, static_cast<$Component*>(this->failB));
	$nc(this->passB)->setEnabled(false);
	$nc(this->failB)->setEnabled(false);
	add("South"_s, static_cast<$Component*>(this->buttonP));
	$nc(this->run)->addActionListener($$new($TestDialog4FileChooserTest$1, this));
	$nc(this->passB)->addActionListener($$new($TestDialog4FileChooserTest$2, this));
	$nc(this->failB)->addActionListener($$new($TestDialog4FileChooserTest$3, this));
	pack();
	setVisible(true);
}

void TestDialog4FileChooserTest::printInstructions($StringArray* instructions) {
	$useLocalCurrentObjectStackCache();
	$nc(this->instructionsText)->setText(""_s);
	$var($String, printStr, nullptr);
	$var($String, remainingStr, nullptr);
	{
		$var($StringArray, arr$, instructions);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, instruction, arr$->get(i$));
			{
				$assign(remainingStr, instruction);
				while ($nc(remainingStr)->length() > 0) {
					if (remainingStr->length() >= this->maxStringLength) {
						int32_t posOfSpace = remainingStr->lastIndexOf((int32_t)u' ', this->maxStringLength - 1);
						if (posOfSpace <= 0) {
							posOfSpace = this->maxStringLength - 1;
						}
						$assign(printStr, remainingStr->substring(0, posOfSpace + 1));
						$assign(remainingStr, remainingStr->substring(posOfSpace + 1));
					} else {
						$assign(printStr, remainingStr);
						$assign(remainingStr, ""_s);
					}
					$nc(this->instructionsText)->append($$str({printStr, "\n"_s}));
				}
			}
		}
	}
}

void TestDialog4FileChooserTest::displayMessage($String* messageIn) {
	$nc(this->messageText)->append($$str({messageIn, "\n"_s}));
}

TestDialog4FileChooserTest::TestDialog4FileChooserTest() {
}

$Class* TestDialog4FileChooserTest::load$($String* name, bool initialize) {
	$loadClass(TestDialog4FileChooserTest, name, initialize, &_TestDialog4FileChooserTest_ClassInfo_, allocate$TestDialog4FileChooserTest);
	return class$;
}

$Class* TestDialog4FileChooserTest::class$ = nullptr;