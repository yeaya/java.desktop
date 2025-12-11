#include <JFileChooserOrientation.h>

#include <JFileChooserOrientation$1.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Frame.h>
#include <java/awt/GridBagLayout.h>
#include <java/awt/Window.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/Runnable.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

#undef LEFT_TO_RIGHT
#undef RIGHT_TO_LEFT
#undef UNKNOWN

using $JFileChooserOrientation$1 = ::JFileChooserOrientation$1;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Frame = ::java::awt::Frame;
using $GridBagLayout = ::java::awt::GridBagLayout;
using $Window = ::java::awt::Window;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JButton = ::javax::swing::JButton;
using $JComboBox = ::javax::swing::JComboBox;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;
using $JPanel = ::javax::swing::JPanel;
using $JTextArea = ::javax::swing::JTextArea;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

$FieldInfo _JFileChooserOrientation_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(JFileChooserOrientation, frame)},
	{"layout", "Ljava/awt/GridBagLayout;", nullptr, $PRIVATE | $STATIC, $staticField(JFileChooserOrientation, layout)},
	{"panel", "Ljavax/swing/JPanel;", nullptr, $PRIVATE | $STATIC, $staticField(JFileChooserOrientation, panel)},
	{"lookAndFeelPanel", "Ljavax/swing/JPanel;", nullptr, $PRIVATE | $STATIC, $staticField(JFileChooserOrientation, lookAndFeelPanel)},
	{"orientationPanel", "Ljavax/swing/JPanel;", nullptr, $PRIVATE | $STATIC, $staticField(JFileChooserOrientation, orientationPanel)},
	{"passFailPanel", "Ljavax/swing/JPanel;", nullptr, $PRIVATE | $STATIC, $staticField(JFileChooserOrientation, passFailPanel)},
	{"instructionsTextArea", "Ljavax/swing/JTextArea;", nullptr, $PRIVATE | $STATIC, $staticField(JFileChooserOrientation, instructionsTextArea)},
	{"lookAndFeelLabel", "Ljavax/swing/JLabel;", nullptr, $PRIVATE | $STATIC, $staticField(JFileChooserOrientation, lookAndFeelLabel)},
	{"orientationLabel", "Ljavax/swing/JLabel;", nullptr, $PRIVATE | $STATIC, $staticField(JFileChooserOrientation, orientationLabel)},
	{"lookAndFeelComboBox", "Ljavax/swing/JComboBox;", nullptr, $PRIVATE | $STATIC, $staticField(JFileChooserOrientation, lookAndFeelComboBox)},
	{"orientationComboBox", "Ljavax/swing/JComboBox;", nullptr, $PRIVATE | $STATIC, $staticField(JFileChooserOrientation, orientationComboBox)},
	{"fileChooserButton", "Ljavax/swing/JButton;", nullptr, $PRIVATE | $STATIC, $staticField(JFileChooserOrientation, fileChooserButton)},
	{"passButton", "Ljavax/swing/JButton;", nullptr, $PRIVATE | $STATIC, $staticField(JFileChooserOrientation, passButton)},
	{"failButton", "Ljavax/swing/JButton;", nullptr, $PRIVATE | $STATIC, $staticField(JFileChooserOrientation, failButton)},
	{"openChooser", "Ljavax/swing/JFileChooser;", nullptr, $PRIVATE | $STATIC, $staticField(JFileChooserOrientation, openChooser)},
	{"lookAndFeelArray", "[Ljavax/swing/UIManager$LookAndFeelInfo;", nullptr, $PRIVATE | $STATIC, $staticField(JFileChooserOrientation, lookAndFeelArray)},
	{"orientationLTR", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JFileChooserOrientation, orientationLTR)},
	{"orientationRTL", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JFileChooserOrientation, orientationRTL)},
	{"fileChooserString", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JFileChooserOrientation, fileChooserString)},
	{}
};

$MethodInfo _JFileChooserOrientation_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JFileChooserOrientation::*)()>(&JFileChooserOrientation::init$))},
	{"createManualTestUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&JFileChooserOrientation::createManualTestUI)), "java.lang.Exception"},
	{"fail", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&JFileChooserOrientation::fail)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&JFileChooserOrientation::main)), "java.lang.Exception"},
	{"pass", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&JFileChooserOrientation::pass)), "java.lang.Exception"},
	{"showFileChooser", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&JFileChooserOrientation::showFileChooser)), "java.lang.Exception"},
	{"tryLookAndFeel", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*)>(&JFileChooserOrientation::tryLookAndFeel)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _JFileChooserOrientation_InnerClassesInfo_[] = {
	{"JFileChooserOrientation$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JFileChooserOrientation_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"JFileChooserOrientation",
	"java.lang.Object",
	nullptr,
	_JFileChooserOrientation_FieldInfo_,
	_JFileChooserOrientation_MethodInfo_,
	nullptr,
	nullptr,
	_JFileChooserOrientation_InnerClassesInfo_,
	nullptr,
	nullptr,
	"JFileChooserOrientation$1,JFileChooserOrientation$1$3,JFileChooserOrientation$1$2,JFileChooserOrientation$1$1"
};

$Object* allocate$JFileChooserOrientation($Class* clazz) {
	return $of($alloc(JFileChooserOrientation));
}

$JFrame* JFileChooserOrientation::frame = nullptr;
$GridBagLayout* JFileChooserOrientation::layout = nullptr;
$JPanel* JFileChooserOrientation::panel = nullptr;
$JPanel* JFileChooserOrientation::lookAndFeelPanel = nullptr;
$JPanel* JFileChooserOrientation::orientationPanel = nullptr;
$JPanel* JFileChooserOrientation::passFailPanel = nullptr;
$JTextArea* JFileChooserOrientation::instructionsTextArea = nullptr;
$JLabel* JFileChooserOrientation::lookAndFeelLabel = nullptr;
$JLabel* JFileChooserOrientation::orientationLabel = nullptr;
$JComboBox* JFileChooserOrientation::lookAndFeelComboBox = nullptr;
$JComboBox* JFileChooserOrientation::orientationComboBox = nullptr;
$JButton* JFileChooserOrientation::fileChooserButton = nullptr;
$JButton* JFileChooserOrientation::passButton = nullptr;
$JButton* JFileChooserOrientation::failButton = nullptr;
$JFileChooser* JFileChooserOrientation::openChooser = nullptr;
$UIManager$LookAndFeelInfoArray* JFileChooserOrientation::lookAndFeelArray = nullptr;
$String* JFileChooserOrientation::orientationLTR = nullptr;
$String* JFileChooserOrientation::orientationRTL = nullptr;
$String* JFileChooserOrientation::fileChooserString = nullptr;

void JFileChooserOrientation::init$() {
}

void JFileChooserOrientation::main($StringArray* args) {
	$init(JFileChooserOrientation);
	createManualTestUI();
}

void JFileChooserOrientation::createManualTestUI() {
	$init(JFileChooserOrientation);
	$SwingUtilities::invokeAndWait($$new($JFileChooserOrientation$1));
}

void JFileChooserOrientation::pass() {
	$init(JFileChooserOrientation);
	$nc(JFileChooserOrientation::frame)->dispose();
}

void JFileChooserOrientation::fail() {
	$init(JFileChooserOrientation);
	$useLocalCurrentObjectStackCache();
	$nc(JFileChooserOrientation::frame)->dispose();
	$nc($System::err)->println($$str({$($nc($of($($nc(JFileChooserOrientation::lookAndFeelComboBox)->getSelectedItem())))->toString()), " : Incorrect Orientation"_s}));
}

void JFileChooserOrientation::showFileChooser() {
	$init(JFileChooserOrientation);
	$useLocalCurrentObjectStackCache();
	if (tryLookAndFeel($($nc($of($($nc(JFileChooserOrientation::lookAndFeelComboBox)->getSelectedItem())))->toString()))) {
		$assignStatic(JFileChooserOrientation::openChooser, $new($JFileChooser));
		$init($ComponentOrientation);
		$var($ComponentOrientation, orientation, $ComponentOrientation::UNKNOWN);
		{
			$var($String, s9052$, $nc($of($($nc(JFileChooserOrientation::orientationComboBox)->getSelectedItem())))->toString());
			int32_t tmp9052$ = -1;
			switch ($nc(s9052$)->hashCode()) {
			case (int32_t)0xDDD5A7D0:
				{
					if (s9052$->equals(" Left to Right"_s)) {
						tmp9052$ = 0;
					}
					break;
				}
			case (int32_t)0xD233B068:
				{
					if (s9052$->equals(" Right to Left"_s)) {
						tmp9052$ = 1;
					}
					break;
				}
			}
			switch (tmp9052$) {
			case 0:
				{
					$assign(orientation, $ComponentOrientation::LEFT_TO_RIGHT);
					break;
				}
			case 1:
				{
					$assign(orientation, $ComponentOrientation::RIGHT_TO_LEFT);
					break;
				}
			}
		}
		$nc(JFileChooserOrientation::openChooser)->setComponentOrientation(orientation);
		$nc(JFileChooserOrientation::openChooser)->showOpenDialog(JFileChooserOrientation::frame);
	}
}

bool JFileChooserOrientation::tryLookAndFeel($String* lookAndFeelString) {
	$init(JFileChooserOrientation);
	try {
		$UIManager::setLookAndFeel(lookAndFeelString);
	} catch ($UnsupportedLookAndFeelException& e) {
		return false;
	} catch ($ClassNotFoundException& e) {
		return false;
	} catch ($InstantiationException& e) {
		return false;
	} catch ($IllegalAccessException& e) {
		return false;
	}
	return true;
}

JFileChooserOrientation::JFileChooserOrientation() {
}

void clinit$JFileChooserOrientation($Class* class$) {
	$assignStatic(JFileChooserOrientation::orientationLTR, " Left to Right"_s);
	$assignStatic(JFileChooserOrientation::orientationRTL, " Right to Left"_s);
	$assignStatic(JFileChooserOrientation::fileChooserString, "Show File Chooser"_s);
}

$Class* JFileChooserOrientation::load$($String* name, bool initialize) {
	$loadClass(JFileChooserOrientation, name, initialize, &_JFileChooserOrientation_ClassInfo_, clinit$JFileChooserOrientation, allocate$JFileChooserOrientation);
	return class$;
}

$Class* JFileChooserOrientation::class$ = nullptr;