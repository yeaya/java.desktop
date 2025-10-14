#include <bug4987336.h>

#include <bug4987336$LafRadioButton.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <java/util/Dictionary.h>
#include <java/util/Hashtable.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/BoxLayout.h>
#include <javax/swing/ButtonGroup.h>
#include <javax/swing/Icon.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JRadioButton.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JSlider.h>
#include <javax/swing/JToggleButton.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/TitledBorder.h>
#include <jcpp.h>

#undef ANIM_IMAGE_RES
#undef IMAGE_RES
#undef LEFT
#undef Y_AXIS

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $bug4987336$LafRadioButton = ::bug4987336$LafRadioButton;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $Dictionary = ::java::util::Dictionary;
using $Hashtable = ::java::util::Hashtable;
using $AbstractButton = ::javax::swing::AbstractButton;
using $BoxLayout = ::javax::swing::BoxLayout;
using $ButtonGroup = ::javax::swing::ButtonGroup;
using $Icon = ::javax::swing::Icon;
using $ImageIcon = ::javax::swing::ImageIcon;
using $JApplet = ::javax::swing::JApplet;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $JPanel = ::javax::swing::JPanel;
using $JRadioButton = ::javax::swing::JRadioButton;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JSlider = ::javax::swing::JSlider;
using $JToggleButton = ::javax::swing::JToggleButton;
using $SwingConstants = ::javax::swing::SwingConstants;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $TitledBorder = ::javax::swing::border::TitledBorder;

$FieldInfo _bug4987336_FieldInfo_[] = {
	{"IMAGE_RES", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug4987336, IMAGE_RES)},
	{"ANIM_IMAGE_RES", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug4987336, ANIM_IMAGE_RES)},
	{}
};

$MethodInfo _bug4987336_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4987336::*)()>(&bug4987336::init$))},
	{"createLabel", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/swing/JLabel;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$JLabel*(*)($String*,$String*)>(&bug4987336::createLabel))},
	{"createSlider", "(ZLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljavax/swing/JSlider;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$JSlider*(*)(bool,$String*,$String*,$String*,$String*)>(&bug4987336::createSlider))},
	{"init", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _bug4987336_InnerClassesInfo_[] = {
	{"bug4987336$LafRadioButton", "bug4987336", "LafRadioButton", $PRIVATE},
	{}
};

$ClassInfo _bug4987336_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug4987336",
	"javax.swing.JApplet",
	nullptr,
	_bug4987336_FieldInfo_,
	_bug4987336_MethodInfo_,
	nullptr,
	nullptr,
	_bug4987336_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug4987336$LafRadioButton,bug4987336$LafRadioButton$1"
};

$Object* allocate$bug4987336($Class* clazz) {
	return $of($alloc(bug4987336));
}

$String* bug4987336::IMAGE_RES = nullptr;
$String* bug4987336::ANIM_IMAGE_RES = nullptr;

void bug4987336::init$() {
	$JApplet::init$();
}

void bug4987336::init() {
	$var($JPanel, pnLafs, $new($JPanel));
	pnLafs->setLayout($$new($BoxLayout, pnLafs, $BoxLayout::Y_AXIS));
	$var($ButtonGroup, group, $new($ButtonGroup));
	pnLafs->setBorder($$new($TitledBorder, "Available Lafs"_s));
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, lafInfo, arr$->get(i$));
			{
				$var($bug4987336$LafRadioButton, comp, $new($bug4987336$LafRadioButton, this, lafInfo));
				pnLafs->add(static_cast<$Component*>(comp));
				group->add(comp);
			}
		}
	}
	$var($JPanel, pnContent, $new($JPanel));
	pnContent->setLayout($$new($BoxLayout, pnContent, $BoxLayout::Y_AXIS));
	pnContent->add(static_cast<$Component*>(pnLafs));
	pnContent->add($(static_cast<$Component*>(createSlider(true, bug4987336::IMAGE_RES, bug4987336::IMAGE_RES, bug4987336::ANIM_IMAGE_RES, bug4987336::ANIM_IMAGE_RES))));
	pnContent->add($(static_cast<$Component*>(createSlider(false, bug4987336::IMAGE_RES, bug4987336::IMAGE_RES, bug4987336::ANIM_IMAGE_RES, bug4987336::ANIM_IMAGE_RES))));
	pnContent->add($(static_cast<$Component*>(createSlider(true, bug4987336::ANIM_IMAGE_RES, nullptr, bug4987336::IMAGE_RES, bug4987336::IMAGE_RES))));
	pnContent->add($(static_cast<$Component*>(createSlider(false, bug4987336::ANIM_IMAGE_RES, nullptr, bug4987336::IMAGE_RES, bug4987336::IMAGE_RES))));
	$nc($(getContentPane()))->add(static_cast<$Component*>($$new($JScrollPane, pnContent)));
}

$JSlider* bug4987336::createSlider(bool enabled, $String* firstEnabledImage, $String* firstDisabledImage, $String* secondEnabledImage, $String* secondDisabledImage) {
	$init(bug4987336);
	$var($Hashtable, dictionary, $new($Hashtable));
	$var($Object, var$0, $of($Integer::valueOf(0)));
	dictionary->put(var$0, $(createLabel(firstEnabledImage, firstDisabledImage)));
	$var($Object, var$1, $of($Integer::valueOf(1)));
	dictionary->put(var$1, $(createLabel(secondEnabledImage, secondDisabledImage)));
	$var($JSlider, result, $new($JSlider, 0, 1));
	result->setLabelTable(dictionary);
	result->setPaintLabels(true);
	result->setEnabled(enabled);
	return result;
}

$JLabel* bug4987336::createLabel($String* enabledImage, $String* disabledImage) {
	$init(bug4987336);
	$beforeCallerSensitive();
	$var($ImageIcon, enabledIcon, enabledImage == nullptr ? ($ImageIcon*)nullptr : $new($ImageIcon, $(bug4987336::class$->getResource(enabledImage))));
	$var($ImageIcon, disabledIcon, disabledImage == nullptr ? ($ImageIcon*)nullptr : $new($ImageIcon, $(bug4987336::class$->getResource(disabledImage))));
	$var($JLabel, result, $new($JLabel, enabledImage == nullptr && disabledImage == nullptr ? "No image"_s : "Image"_s, enabledIcon, $SwingConstants::LEFT));
	result->setDisabledIcon(disabledIcon);
	return result;
}

bug4987336::bug4987336() {
}

void clinit$bug4987336($Class* class$) {
	$assignStatic(bug4987336::IMAGE_RES, "box.gif"_s);
	$assignStatic(bug4987336::ANIM_IMAGE_RES, "duke.gif"_s);
}

$Class* bug4987336::load$($String* name, bool initialize) {
	$loadClass(bug4987336, name, initialize, &_bug4987336_ClassInfo_, clinit$bug4987336, allocate$bug4987336);
	return class$;
}

$Class* bug4987336::class$ = nullptr;