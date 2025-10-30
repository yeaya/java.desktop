#include <JFileChooserOrientation$1.h>

#include <JFileChooserOrientation$1$1.h>
#include <JFileChooserOrientation$1$2.h>
#include <JFileChooserOrientation$1$3.h>
#include <JFileChooserOrientation.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/GridBagConstraints.h>
#include <java/awt/GridBagLayout.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionListener.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/BorderFactory.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef HORIZONTAL

using $JFileChooserOrientation = ::JFileChooserOrientation;
using $JFileChooserOrientation$1$1 = ::JFileChooserOrientation$1$1;
using $JFileChooserOrientation$1$2 = ::JFileChooserOrientation$1$2;
using $JFileChooserOrientation$1$3 = ::JFileChooserOrientation$1$3;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $GridBagConstraints = ::java::awt::GridBagConstraints;
using $GridBagLayout = ::java::awt::GridBagLayout;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Window = ::java::awt::Window;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AbstractButton = ::javax::swing::AbstractButton;
using $BorderFactory = ::javax::swing::BorderFactory;
using $JButton = ::javax::swing::JButton;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;
using $JPanel = ::javax::swing::JPanel;
using $JTextArea = ::javax::swing::JTextArea;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $Border = ::javax::swing::border::Border;
using $JTextComponent = ::javax::swing::text::JTextComponent;

$MethodInfo _JFileChooserOrientation$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(JFileChooserOrientation$1::*)()>(&JFileChooserOrientation$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JFileChooserOrientation$1_EnclosingMethodInfo_ = {
	"JFileChooserOrientation",
	"createManualTestUI",
	"()V"
};

$InnerClassInfo _JFileChooserOrientation$1_InnerClassesInfo_[] = {
	{"JFileChooserOrientation$1", nullptr, nullptr, 0},
	{"JFileChooserOrientation$1$3", nullptr, nullptr, 0},
	{"JFileChooserOrientation$1$2", nullptr, nullptr, 0},
	{"JFileChooserOrientation$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JFileChooserOrientation$1_ClassInfo_ = {
	$ACC_SUPER,
	"JFileChooserOrientation$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_JFileChooserOrientation$1_MethodInfo_,
	nullptr,
	&_JFileChooserOrientation$1_EnclosingMethodInfo_,
	_JFileChooserOrientation$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"JFileChooserOrientation"
};

$Object* allocate$JFileChooserOrientation$1($Class* clazz) {
	return $of($alloc(JFileChooserOrientation$1));
}

void JFileChooserOrientation$1::init$() {
}

void JFileChooserOrientation$1::run() {
	$useLocalCurrentObjectStackCache();
	$init($JFileChooserOrientation);
	$assignStatic($JFileChooserOrientation::layout, $new($GridBagLayout));
	$var($GridBagConstraints, gbc, $new($GridBagConstraints));
	$assignStatic($JFileChooserOrientation::panel, $new($JPanel, static_cast<$LayoutManager*>($JFileChooserOrientation::layout)));
	gbc->fill = $GridBagConstraints::HORIZONTAL;
	gbc->gridx = 0;
	gbc->gridy = 0;
	$assignStatic($JFileChooserOrientation::instructionsTextArea, $new($JTextArea));
	$var($String, instructions, "1) Select Look and feel from combobox\n2) Select component orientation\n3) Click on \"Show File Chooser\"\n4) Check if orientation is as selected\n5) Press \"Cancel\" on the File Chooser Dialog\n\n Perform steps 1- 4 for all LAFs & orientations\n If all are correct press Pass or else press Fail"_s);
	$nc($JFileChooserOrientation::instructionsTextArea)->setText(instructions);
	$init($Color);
	$nc($JFileChooserOrientation::instructionsTextArea)->setBorder($($BorderFactory::createLineBorder($Color::black)));
	$nc($JFileChooserOrientation::panel)->add(static_cast<$Component*>($JFileChooserOrientation::instructionsTextArea), $of(gbc));
	$assignStatic($JFileChooserOrientation::lookAndFeelPanel, $new($JPanel));
	$nc($JFileChooserOrientation::lookAndFeelPanel)->setBorder($($BorderFactory::createLineBorder($Color::black)));
	$assignStatic($JFileChooserOrientation::lookAndFeelLabel, $new($JLabel, "Look And Feel: "_s));
	gbc->gridx = 0;
	gbc->gridy = 0;
	$nc($JFileChooserOrientation::lookAndFeelPanel)->add(static_cast<$Component*>($JFileChooserOrientation::lookAndFeelLabel), $of(gbc));
	$assignStatic($JFileChooserOrientation::lookAndFeelComboBox, $new($JComboBox));
	$assignStatic($JFileChooserOrientation::lookAndFeelArray, $UIManager::getInstalledLookAndFeels());
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $JFileChooserOrientation::lookAndFeelArray);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, lookAndFeelItem, arr$->get(i$));
			{
				$nc($JFileChooserOrientation::lookAndFeelComboBox)->addItem($($nc(lookAndFeelItem)->getClassName()));
			}
		}
	}
	gbc->gridx = 1;
	gbc->gridy = 0;
	$nc($JFileChooserOrientation::lookAndFeelPanel)->add(static_cast<$Component*>($JFileChooserOrientation::lookAndFeelComboBox), $of(gbc));
	gbc->gridx = 0;
	gbc->gridy = 1;
	$nc($JFileChooserOrientation::panel)->add(static_cast<$Component*>($JFileChooserOrientation::lookAndFeelPanel), $of(gbc));
	$assignStatic($JFileChooserOrientation::orientationPanel, $new($JPanel));
	$nc($JFileChooserOrientation::orientationPanel)->setBorder($($BorderFactory::createLineBorder($Color::black)));
	$assignStatic($JFileChooserOrientation::orientationLabel, $new($JLabel, "Orientation: "_s));
	gbc->gridx = 0;
	gbc->gridy = 0;
	$nc($JFileChooserOrientation::orientationPanel)->add(static_cast<$Component*>($JFileChooserOrientation::orientationLabel), $of(gbc));
	$assignStatic($JFileChooserOrientation::orientationComboBox, $new($JComboBox));
	$nc($JFileChooserOrientation::orientationComboBox)->addItem(" Left to Right"_s);
	$nc($JFileChooserOrientation::orientationComboBox)->addItem(" Right to Left"_s);
	gbc->gridx = 1;
	gbc->gridy = 0;
	$nc($JFileChooserOrientation::orientationPanel)->add(static_cast<$Component*>($JFileChooserOrientation::orientationComboBox), $of(gbc));
	gbc->gridx = 0;
	gbc->gridy = 2;
	$nc($JFileChooserOrientation::panel)->add(static_cast<$Component*>($JFileChooserOrientation::orientationPanel), $of(gbc));
	$assignStatic($JFileChooserOrientation::fileChooserButton, $new($JButton, "Show File Chooser"_s));
	$nc($JFileChooserOrientation::fileChooserButton)->setActionCommand("Show File Chooser"_s);
	$nc($JFileChooserOrientation::fileChooserButton)->addActionListener($$new($JFileChooserOrientation$1$1, this));
	gbc->gridx = 0;
	gbc->gridy = 3;
	$nc($JFileChooserOrientation::panel)->add(static_cast<$Component*>($JFileChooserOrientation::fileChooserButton), $of(gbc));
	$assignStatic($JFileChooserOrientation::passFailPanel, $new($JPanel));
	$nc($JFileChooserOrientation::passFailPanel)->setBorder($($BorderFactory::createLineBorder($Color::black)));
	$assignStatic($JFileChooserOrientation::passButton, $new($JButton, " Pass "_s));
	$nc($JFileChooserOrientation::passButton)->addActionListener($$new($JFileChooserOrientation$1$2, this));
	gbc->gridx = 0;
	gbc->gridy = 0;
	$nc($JFileChooserOrientation::passFailPanel)->add(static_cast<$Component*>($JFileChooserOrientation::passButton), $of(gbc));
	$assignStatic($JFileChooserOrientation::failButton, $new($JButton, " Fail "_s));
	$nc($JFileChooserOrientation::failButton)->addActionListener($$new($JFileChooserOrientation$1$3, this));
	gbc->gridx = 1;
	gbc->gridy = 0;
	$nc($JFileChooserOrientation::passFailPanel)->add(static_cast<$Component*>($JFileChooserOrientation::failButton), $of(gbc));
	gbc->gridx = 0;
	gbc->gridy = 4;
	$nc($JFileChooserOrientation::panel)->add(static_cast<$Component*>($JFileChooserOrientation::passFailPanel), $of(gbc));
	$assignStatic($JFileChooserOrientation::frame, $new($JFrame));
	$nc($JFileChooserOrientation::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc($JFileChooserOrientation::frame)->setContentPane($JFileChooserOrientation::panel);
	$nc($JFileChooserOrientation::frame)->pack();
	$nc($JFileChooserOrientation::frame)->setVisible(true);
}

JFileChooserOrientation$1::JFileChooserOrientation$1() {
}

$Class* JFileChooserOrientation$1::load$($String* name, bool initialize) {
	$loadClass(JFileChooserOrientation$1, name, initialize, &_JFileChooserOrientation$1_ClassInfo_, allocate$JFileChooserOrientation$1);
	return class$;
}

$Class* JFileChooserOrientation$1::class$ = nullptr;