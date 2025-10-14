#include <javax/swing/colorchooser/DefaultSwatchChooserPanel.h>

#include <java/awt/BorderLayout.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/GridBagConstraints.h>
#include <java/awt/GridBagLayout.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/event/KeyAdapter.h>
#include <java/awt/event/KeyListener.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseListener.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JColorChooser.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/CompoundBorder.h>
#include <javax/swing/border/LineBorder.h>
#include <javax/swing/colorchooser/AbstractColorChooserPanel.h>
#include <javax/swing/colorchooser/DefaultSwatchChooserPanel$MainSwatchKeyListener.h>
#include <javax/swing/colorchooser/DefaultSwatchChooserPanel$MainSwatchListener.h>
#include <javax/swing/colorchooser/DefaultSwatchChooserPanel$RecentSwatchKeyListener.h>
#include <javax/swing/colorchooser/DefaultSwatchChooserPanel$RecentSwatchListener.h>
#include <javax/swing/colorchooser/MainSwatchPanel.h>
#include <javax/swing/colorchooser/RecentSwatchPanel.h>
#include <javax/swing/colorchooser/SwatchPanel.h>
#include <jcpp.h>

#undef ACCESSIBLE_NAME_PROPERTY
#undef CENTER
#undef LAST_LINE_START
#undef REMAINDER

using $BorderLayout = ::java::awt::BorderLayout;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $GridBagConstraints = ::java::awt::GridBagConstraints;
using $GridBagLayout = ::java::awt::GridBagLayout;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $KeyAdapter = ::java::awt::event::KeyAdapter;
using $KeyListener = ::java::awt::event::KeyListener;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseListener = ::java::awt::event::MouseListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $Icon = ::javax::swing::Icon;
using $JColorChooser = ::javax::swing::JColorChooser;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $JPanel = ::javax::swing::JPanel;
using $UIManager = ::javax::swing::UIManager;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $CompoundBorder = ::javax::swing::border::CompoundBorder;
using $LineBorder = ::javax::swing::border::LineBorder;
using $AbstractColorChooserPanel = ::javax::swing::colorchooser::AbstractColorChooserPanel;
using $DefaultSwatchChooserPanel$MainSwatchKeyListener = ::javax::swing::colorchooser::DefaultSwatchChooserPanel$MainSwatchKeyListener;
using $DefaultSwatchChooserPanel$MainSwatchListener = ::javax::swing::colorchooser::DefaultSwatchChooserPanel$MainSwatchListener;
using $DefaultSwatchChooserPanel$RecentSwatchKeyListener = ::javax::swing::colorchooser::DefaultSwatchChooserPanel$RecentSwatchKeyListener;
using $DefaultSwatchChooserPanel$RecentSwatchListener = ::javax::swing::colorchooser::DefaultSwatchChooserPanel$RecentSwatchListener;
using $MainSwatchPanel = ::javax::swing::colorchooser::MainSwatchPanel;
using $RecentSwatchPanel = ::javax::swing::colorchooser::RecentSwatchPanel;
using $SwatchPanel = ::javax::swing::colorchooser::SwatchPanel;

namespace javax {
	namespace swing {
		namespace colorchooser {

$FieldInfo _DefaultSwatchChooserPanel_FieldInfo_[] = {
	{"swatchPanel", "Ljavax/swing/colorchooser/SwatchPanel;", nullptr, 0, $field(DefaultSwatchChooserPanel, swatchPanel)},
	{"recentSwatchPanel", "Ljavax/swing/colorchooser/RecentSwatchPanel;", nullptr, 0, $field(DefaultSwatchChooserPanel, recentSwatchPanel)},
	{"mainSwatchListener", "Ljava/awt/event/MouseListener;", nullptr, 0, $field(DefaultSwatchChooserPanel, mainSwatchListener)},
	{"recentSwatchListener", "Ljava/awt/event/MouseListener;", nullptr, 0, $field(DefaultSwatchChooserPanel, recentSwatchListener)},
	{"mainSwatchKeyListener", "Ljava/awt/event/KeyListener;", nullptr, $PRIVATE, $field(DefaultSwatchChooserPanel, mainSwatchKeyListener)},
	{"recentSwatchKeyListener", "Ljava/awt/event/KeyListener;", nullptr, $PRIVATE, $field(DefaultSwatchChooserPanel, recentSwatchKeyListener)},
	{}
};

$MethodInfo _DefaultSwatchChooserPanel_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultSwatchChooserPanel::*)()>(&DefaultSwatchChooserPanel::init$))},
	{"buildChooser", "()V", nullptr, $PROTECTED},
	{"getDisplayName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDisplayedMnemonicIndex", "()I", nullptr, $PUBLIC},
	{"getLargeDisplayIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC},
	{"getMnemonic", "()I", nullptr, $PUBLIC},
	{"getSmallDisplayIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC},
	{"installChooserPanel", "(Ljavax/swing/JColorChooser;)V", nullptr, $PUBLIC},
	{"uninstallChooserPanel", "(Ljavax/swing/JColorChooser;)V", nullptr, $PUBLIC},
	{"updateChooser", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultSwatchChooserPanel_InnerClassesInfo_[] = {
	{"javax.swing.colorchooser.DefaultSwatchChooserPanel$MainSwatchListener", "javax.swing.colorchooser.DefaultSwatchChooserPanel", "MainSwatchListener", 0},
	{"javax.swing.colorchooser.DefaultSwatchChooserPanel$RecentSwatchListener", "javax.swing.colorchooser.DefaultSwatchChooserPanel", "RecentSwatchListener", 0},
	{"javax.swing.colorchooser.DefaultSwatchChooserPanel$MainSwatchKeyListener", "javax.swing.colorchooser.DefaultSwatchChooserPanel", "MainSwatchKeyListener", $PRIVATE},
	{"javax.swing.colorchooser.DefaultSwatchChooserPanel$RecentSwatchKeyListener", "javax.swing.colorchooser.DefaultSwatchChooserPanel", "RecentSwatchKeyListener", $PRIVATE},
	{}
};

$ClassInfo _DefaultSwatchChooserPanel_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.colorchooser.DefaultSwatchChooserPanel",
	"javax.swing.colorchooser.AbstractColorChooserPanel",
	nullptr,
	_DefaultSwatchChooserPanel_FieldInfo_,
	_DefaultSwatchChooserPanel_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultSwatchChooserPanel_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.colorchooser.DefaultSwatchChooserPanel$MainSwatchListener,javax.swing.colorchooser.DefaultSwatchChooserPanel$RecentSwatchListener,javax.swing.colorchooser.DefaultSwatchChooserPanel$MainSwatchKeyListener,javax.swing.colorchooser.DefaultSwatchChooserPanel$RecentSwatchKeyListener"
};

$Object* allocate$DefaultSwatchChooserPanel($Class* clazz) {
	return $of($alloc(DefaultSwatchChooserPanel));
}

void DefaultSwatchChooserPanel::init$() {
	$AbstractColorChooserPanel::init$();
	setInheritsPopupMenu(true);
}

$String* DefaultSwatchChooserPanel::getDisplayName() {
	return $UIManager::getString($of("ColorChooser.swatchesNameText"_s), $(getLocale()));
}

int32_t DefaultSwatchChooserPanel::getMnemonic() {
	return getInt("ColorChooser.swatchesMnemonic"_s, -1);
}

int32_t DefaultSwatchChooserPanel::getDisplayedMnemonicIndex() {
	return getInt("ColorChooser.swatchesDisplayedMnemonicIndex"_s, -1);
}

$Icon* DefaultSwatchChooserPanel::getSmallDisplayIcon() {
	return nullptr;
}

$Icon* DefaultSwatchChooserPanel::getLargeDisplayIcon() {
	return nullptr;
}

void DefaultSwatchChooserPanel::installChooserPanel($JColorChooser* enclosingChooser) {
	$AbstractColorChooserPanel::installChooserPanel(enclosingChooser);
}

void DefaultSwatchChooserPanel::buildChooser() {
	$var($String, recentStr, $UIManager::getString($of("ColorChooser.swatchesRecentText"_s), $(getLocale())));
	$var($GridBagLayout, gb, $new($GridBagLayout));
	$var($GridBagConstraints, gbc, $new($GridBagConstraints));
	$var($JPanel, superHolder, $new($JPanel, static_cast<$LayoutManager*>(gb)));
	$set(this, swatchPanel, $new($MainSwatchPanel));
	$init($AccessibleContext);
	$nc(this->swatchPanel)->putClientProperty($AccessibleContext::ACCESSIBLE_NAME_PROPERTY, $(getDisplayName()));
	$nc(this->swatchPanel)->setInheritsPopupMenu(true);
	$set(this, recentSwatchPanel, $new($RecentSwatchPanel));
	$nc(this->recentSwatchPanel)->putClientProperty($AccessibleContext::ACCESSIBLE_NAME_PROPERTY, recentStr);
	$set(this, mainSwatchKeyListener, $new($DefaultSwatchChooserPanel$MainSwatchKeyListener, this));
	$set(this, mainSwatchListener, $new($DefaultSwatchChooserPanel$MainSwatchListener, this));
	$nc(this->swatchPanel)->addMouseListener(this->mainSwatchListener);
	$nc(this->swatchPanel)->addKeyListener(this->mainSwatchKeyListener);
	$set(this, recentSwatchListener, $new($DefaultSwatchChooserPanel$RecentSwatchListener, this));
	$set(this, recentSwatchKeyListener, $new($DefaultSwatchChooserPanel$RecentSwatchKeyListener, this));
	$nc(this->recentSwatchPanel)->addMouseListener(this->recentSwatchListener);
	$nc(this->recentSwatchPanel)->addKeyListener(this->recentSwatchKeyListener);
	$var($JPanel, mainHolder, $new($JPanel, static_cast<$LayoutManager*>($$new($BorderLayout))));
	$init($Color);
	$var($Border, var$0, static_cast<$Border*>($new($LineBorder, $Color::black)));
	$var($Border, border, $new($CompoundBorder, var$0, $$new($LineBorder, $Color::white)));
	mainHolder->setBorder(border);
	$init($BorderLayout);
	mainHolder->add(static_cast<$Component*>(this->swatchPanel), $of($BorderLayout::CENTER));
	gbc->anchor = $GridBagConstraints::LAST_LINE_START;
	gbc->gridwidth = 1;
	gbc->gridheight = 2;
	$var($Insets, oldInsets, gbc->insets);
	$set(gbc, insets, $new($Insets, 0, 0, 0, 10));
	superHolder->add(static_cast<$Component*>(mainHolder), $of(gbc));
	$set(gbc, insets, oldInsets);
	$nc(this->recentSwatchPanel)->setInheritsPopupMenu(true);
	$var($JPanel, recentHolder, $new($JPanel, static_cast<$LayoutManager*>($$new($BorderLayout))));
	recentHolder->setBorder(border);
	recentHolder->setInheritsPopupMenu(true);
	recentHolder->add(static_cast<$Component*>(this->recentSwatchPanel), $of($BorderLayout::CENTER));
	$var($JLabel, l, $new($JLabel, recentStr));
	l->setLabelFor(this->recentSwatchPanel);
	gbc->gridwidth = $GridBagConstraints::REMAINDER;
	gbc->gridheight = 1;
	gbc->weighty = 1.0;
	superHolder->add(static_cast<$Component*>(l), $of(gbc));
	gbc->weighty = (double)0;
	gbc->gridheight = $GridBagConstraints::REMAINDER;
	$set(gbc, insets, $new($Insets, 0, 0, 0, 2));
	superHolder->add(static_cast<$Component*>(recentHolder), $of(gbc));
	superHolder->setInheritsPopupMenu(true);
	add(static_cast<$Component*>(superHolder));
}

void DefaultSwatchChooserPanel::uninstallChooserPanel($JColorChooser* enclosingChooser) {
	$AbstractColorChooserPanel::uninstallChooserPanel(enclosingChooser);
	$nc(this->swatchPanel)->removeMouseListener(this->mainSwatchListener);
	$nc(this->swatchPanel)->removeKeyListener(this->mainSwatchKeyListener);
	$nc(this->recentSwatchPanel)->removeMouseListener(this->recentSwatchListener);
	$nc(this->recentSwatchPanel)->removeKeyListener(this->recentSwatchKeyListener);
	$set(this, swatchPanel, nullptr);
	$set(this, recentSwatchPanel, nullptr);
	$set(this, mainSwatchListener, nullptr);
	$set(this, mainSwatchKeyListener, nullptr);
	$set(this, recentSwatchListener, nullptr);
	$set(this, recentSwatchKeyListener, nullptr);
	removeAll();
}

void DefaultSwatchChooserPanel::updateChooser() {
}

DefaultSwatchChooserPanel::DefaultSwatchChooserPanel() {
}

$Class* DefaultSwatchChooserPanel::load$($String* name, bool initialize) {
	$loadClass(DefaultSwatchChooserPanel, name, initialize, &_DefaultSwatchChooserPanel_ClassInfo_, allocate$DefaultSwatchChooserPanel);
	return class$;
}

$Class* DefaultSwatchChooserPanel::class$ = nullptr;

		} // colorchooser
	} // swing
} // javax