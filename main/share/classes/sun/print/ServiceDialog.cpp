#include <sun/print/ServiceDialog.h>

#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dialog$ModalityType.h>
#include <java/awt/Dialog.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/Frame.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GridBagConstraints.h>
#include <java/awt/GridBagLayout.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowListener.h>
#include <java/io/File.h>
#include <java/lang/CharSequence.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Error.h>
#include <java/lang/SecurityException.h>
#include <java/lang/reflect/Field.h>
#include <java/net/URI.h>
#include <java/net/URISyntaxException.h>
#include <java/net/URL.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/EventObject.h>
#include <java/util/MissingResourceException.h>
#include <java/util/ResourceBundle.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/print/DocFlavor.h>
#include <javax/print/PrintService.h>
#include <javax/print/attribute/Attribute.h>
#include <javax/print/attribute/HashPrintRequestAttributeSet.h>
#include <javax/print/attribute/PrintJobAttribute.h>
#include <javax/print/attribute/PrintRequestAttributeSet.h>
#include <javax/print/attribute/standard/Destination.h>
#include <javax/print/attribute/standard/DialogOwner.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/ButtonGroup.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JCheckBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDialog.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JOptionPane.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JRadioButton.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/EmptyBorder.h>
#include <sun/print/ServiceDialog$1.h>
#include <sun/print/ServiceDialog$2.h>
#include <sun/print/ServiceDialog$3.h>
#include <sun/print/ServiceDialog$4.h>
#include <sun/print/ServiceDialog$5.h>
#include <sun/print/ServiceDialog$AppearancePanel.h>
#include <sun/print/ServiceDialog$GeneralPanel.h>
#include <sun/print/ServiceDialog$PageSetupPanel.h>
#include <sun/print/ServiceDialog$ValidatingFileChooser.h>
#include <sun/print/SunPageSelection.h>
#include <jcpp.h>

#undef APPROVE
#undef APPROVE_OPTION
#undef CANCEL
#undef CENTER
#undef DEFAULT_MODALITY_TYPE
#undef SAVE_DIALOG
#undef SOUTH
#undef TRAILING
#undef VK_ESCAPE
#undef WAITING
#undef WHEN_IN_FOCUSED_WINDOW

using $PrintServiceArray = $Array<::javax::print::PrintService>;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dialog = ::java::awt::Dialog;
using $FlowLayout = ::java::awt::FlowLayout;
using $Frame = ::java::awt::Frame;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GridBagConstraints = ::java::awt::GridBagConstraints;
using $GridBagLayout = ::java::awt::GridBagLayout;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Window = ::java::awt::Window;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowListener = ::java::awt::event::WindowListener;
using $File = ::java::io::File;
using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $Field = ::java::lang::reflect::Field;
using $URI = ::java::net::URI;
using $URISyntaxException = ::java::net::URISyntaxException;
using $URL = ::java::net::URL;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $MissingResourceException = ::java::util::MissingResourceException;
using $ResourceBundle = ::java::util::ResourceBundle;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $DocFlavor = ::javax::print::DocFlavor;
using $PrintService = ::javax::print::PrintService;
using $Attribute = ::javax::print::attribute::Attribute;
using $HashPrintRequestAttributeSet = ::javax::print::attribute::HashPrintRequestAttributeSet;
using $PrintJobAttribute = ::javax::print::attribute::PrintJobAttribute;
using $PrintRequestAttributeSet = ::javax::print::attribute::PrintRequestAttributeSet;
using $Destination = ::javax::print::attribute::standard::Destination;
using $DialogOwner = ::javax::print::attribute::standard::DialogOwner;
using $AbstractAction = ::javax::swing::AbstractAction;
using $AbstractButton = ::javax::swing::AbstractButton;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $ButtonGroup = ::javax::swing::ButtonGroup;
using $InputMap = ::javax::swing::InputMap;
using $JButton = ::javax::swing::JButton;
using $JCheckBox = ::javax::swing::JCheckBox;
using $JComponent = ::javax::swing::JComponent;
using $JDialog = ::javax::swing::JDialog;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JOptionPane = ::javax::swing::JOptionPane;
using $JPanel = ::javax::swing::JPanel;
using $JRadioButton = ::javax::swing::JRadioButton;
using $JRootPane = ::javax::swing::JRootPane;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $KeyStroke = ::javax::swing::KeyStroke;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $EmptyBorder = ::javax::swing::border::EmptyBorder;
using $ServiceDialog$1 = ::sun::print::ServiceDialog$1;
using $ServiceDialog$2 = ::sun::print::ServiceDialog$2;
using $ServiceDialog$3 = ::sun::print::ServiceDialog$3;
using $ServiceDialog$4 = ::sun::print::ServiceDialog$4;
using $ServiceDialog$5 = ::sun::print::ServiceDialog$5;
using $ServiceDialog$AppearancePanel = ::sun::print::ServiceDialog$AppearancePanel;
using $ServiceDialog$GeneralPanel = ::sun::print::ServiceDialog$GeneralPanel;
using $ServiceDialog$PageSetupPanel = ::sun::print::ServiceDialog$PageSetupPanel;
using $ServiceDialog$ValidatingFileChooser = ::sun::print::ServiceDialog$ValidatingFileChooser;
using $SunPageSelection = ::sun::print::SunPageSelection;

namespace sun {
	namespace print {

$FieldInfo _ServiceDialog_FieldInfo_[] = {
	{"WAITING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ServiceDialog, WAITING)},
	{"APPROVE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ServiceDialog, APPROVE)},
	{"CANCEL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ServiceDialog, CANCEL)},
	{"strBundle", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ServiceDialog, strBundle)},
	{"panelInsets", "Ljava/awt/Insets;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ServiceDialog, panelInsets)},
	{"compInsets", "Ljava/awt/Insets;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ServiceDialog, compInsets)},
	{"messageRB", "Ljava/util/ResourceBundle;", nullptr, $PRIVATE | $STATIC, $staticField(ServiceDialog, messageRB)},
	{"tpTabs", "Ljavax/swing/JTabbedPane;", nullptr, $PRIVATE, $field(ServiceDialog, tpTabs)},
	{"btnCancel", "Ljavax/swing/JButton;", nullptr, $PRIVATE, $field(ServiceDialog, btnCancel)},
	{"btnApprove", "Ljavax/swing/JButton;", nullptr, $PRIVATE, $field(ServiceDialog, btnApprove)},
	{"services", "[Ljavax/print/PrintService;", nullptr, $PRIVATE, $field(ServiceDialog, services)},
	{"defaultServiceIndex", "I", nullptr, $PRIVATE, $field(ServiceDialog, defaultServiceIndex)},
	{"asOriginal", "Ljavax/print/attribute/PrintRequestAttributeSet;", nullptr, $PRIVATE, $field(ServiceDialog, asOriginal)},
	{"asCurrent", "Ljavax/print/attribute/HashPrintRequestAttributeSet;", nullptr, $PRIVATE, $field(ServiceDialog, asCurrent)},
	{"psCurrent", "Ljavax/print/PrintService;", nullptr, $PRIVATE, $field(ServiceDialog, psCurrent)},
	{"docFlavor", "Ljavax/print/DocFlavor;", nullptr, $PRIVATE, $field(ServiceDialog, docFlavor)},
	{"status", "I", nullptr, $PRIVATE, $field(ServiceDialog, status)},
	{"jfc", "Lsun/print/ServiceDialog$ValidatingFileChooser;", nullptr, $PRIVATE, $field(ServiceDialog, jfc)},
	{"pnlGeneral", "Lsun/print/ServiceDialog$GeneralPanel;", nullptr, $PRIVATE, $field(ServiceDialog, pnlGeneral)},
	{"pnlPageSetup", "Lsun/print/ServiceDialog$PageSetupPanel;", nullptr, $PRIVATE, $field(ServiceDialog, pnlPageSetup)},
	{"pnlAppearance", "Lsun/print/ServiceDialog$AppearancePanel;", nullptr, $PRIVATE, $field(ServiceDialog, pnlAppearance)},
	{"isAWT", "Z", nullptr, $PRIVATE, $field(ServiceDialog, isAWT)},
	{"_keyEventClazz", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $STATIC, $staticField(ServiceDialog, _keyEventClazz)},
	{}
};

$MethodInfo _ServiceDialog_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/GraphicsConfiguration;II[Ljavax/print/PrintService;ILjavax/print/DocFlavor;Ljavax/print/attribute/PrintRequestAttributeSet;Ljava/awt/Window;)V", nullptr, $PUBLIC, $method(static_cast<void(ServiceDialog::*)($GraphicsConfiguration*,int32_t,int32_t,$PrintServiceArray*,int32_t,$DocFlavor*,$PrintRequestAttributeSet*,$Window*)>(&ServiceDialog::init$))},
	{"<init>", "(Ljava/awt/GraphicsConfiguration;IILjavax/print/PrintService;Ljavax/print/DocFlavor;Ljavax/print/attribute/PrintRequestAttributeSet;Ljava/awt/Window;)V", nullptr, $PUBLIC, $method(static_cast<void(ServiceDialog::*)($GraphicsConfiguration*,int32_t,int32_t,$PrintService*,$DocFlavor*,$PrintRequestAttributeSet*,$Window*)>(&ServiceDialog::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"addToBG", "(Ljavax/swing/AbstractButton;Ljava/awt/Container;Ljavax/swing/ButtonGroup;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($AbstractButton*,$Container*,$ButtonGroup*)>(&ServiceDialog::addToBG))},
	{"addToGB", "(Ljava/awt/Component;Ljava/awt/Container;Ljava/awt/GridBagLayout;Ljava/awt/GridBagConstraints;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Component*,$Container*,$GridBagLayout*,$GridBagConstraints*)>(&ServiceDialog::addToGB))},
	{"createButton", "(Ljava/lang/String;Ljava/awt/event/ActionListener;)Ljavax/swing/JButton;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$JButton*(*)($String*,$ActionListener*)>(&ServiceDialog::createButton))},
	{"createCheckBox", "(Ljava/lang/String;Ljava/awt/event/ActionListener;)Ljavax/swing/JCheckBox;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$JCheckBox*(*)($String*,$ActionListener*)>(&ServiceDialog::createCheckBox))},
	{"createExitButton", "(Ljava/lang/String;Ljava/awt/event/ActionListener;)Ljavax/swing/JButton;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$JButton*(*)($String*,$ActionListener*)>(&ServiceDialog::createExitButton))},
	{"createRadioButton", "(Ljava/lang/String;Ljava/awt/event/ActionListener;)Ljavax/swing/JRadioButton;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$JRadioButton*(*)($String*,$ActionListener*)>(&ServiceDialog::createRadioButton))},
	{"dispose", "(I)V", nullptr, $PUBLIC},
	{"getAttributes", "()Ljavax/print/attribute/PrintRequestAttributeSet;", nullptr, $PUBLIC},
	{"getImageResource", "(Ljava/lang/String;)Ljava/net/URL;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$URL*(*)($String*)>(&ServiceDialog::getImageResource))},
	{"getMnemonic", "(Ljava/lang/String;)C", nullptr, $PRIVATE | $STATIC, $method(static_cast<char16_t(*)($String*)>(&ServiceDialog::getMnemonic))},
	{"getMsg", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&ServiceDialog::getMsg))},
	{"getPrintService", "()Ljavax/print/PrintService;", nullptr, $PUBLIC},
	{"getStatus", "()I", nullptr, $PUBLIC},
	{"getVKMnemonic", "(Ljava/lang/String;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($String*)>(&ServiceDialog::getVKMnemonic))},
	{"handleEscKey", "(Ljavax/swing/JButton;)V", nullptr, $PRIVATE, $method(static_cast<void(ServiceDialog::*)($JButton*)>(&ServiceDialog::handleEscKey))},
	{"initPageDialog", "(IILjavax/print/PrintService;Ljavax/print/DocFlavor;Ljavax/print/attribute/PrintRequestAttributeSet;)V", nullptr, 0},
	{"initPrintDialog", "(II[Ljavax/print/PrintService;ILjavax/print/DocFlavor;Ljavax/print/attribute/PrintRequestAttributeSet;)V", nullptr, 0},
	{"initResource", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&ServiceDialog::initResource))},
	{"removeMnemonics", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&ServiceDialog::removeMnemonics))},
	{"showFileChooser", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(ServiceDialog::*)()>(&ServiceDialog::showFileChooser))},
	{"showNoPrintService", "(Ljava/awt/GraphicsConfiguration;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($GraphicsConfiguration*)>(&ServiceDialog::showNoPrintService))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updatePanels", "()V", nullptr, $PRIVATE, $method(static_cast<void(ServiceDialog::*)()>(&ServiceDialog::updatePanels))},
	{}
};

$InnerClassInfo _ServiceDialog_InnerClassesInfo_[] = {
	{"sun.print.ServiceDialog$ValidatingFileChooser", "sun.print.ServiceDialog", "ValidatingFileChooser", $PRIVATE},
	{"sun.print.ServiceDialog$IconRadioButton", "sun.print.ServiceDialog", "IconRadioButton", $PRIVATE},
	{"sun.print.ServiceDialog$JobAttributesPanel", "sun.print.ServiceDialog", "JobAttributesPanel", $PRIVATE},
	{"sun.print.ServiceDialog$SidesPanel", "sun.print.ServiceDialog", "SidesPanel", $PRIVATE},
	{"sun.print.ServiceDialog$QualityPanel", "sun.print.ServiceDialog", "QualityPanel", $PRIVATE},
	{"sun.print.ServiceDialog$ChromaticityPanel", "sun.print.ServiceDialog", "ChromaticityPanel", $PRIVATE},
	{"sun.print.ServiceDialog$AppearancePanel", "sun.print.ServiceDialog", "AppearancePanel", $PRIVATE},
	{"sun.print.ServiceDialog$OrientationPanel", "sun.print.ServiceDialog", "OrientationPanel", $PRIVATE},
	{"sun.print.ServiceDialog$MediaPanel", "sun.print.ServiceDialog", "MediaPanel", $PRIVATE},
	{"sun.print.ServiceDialog$MarginsPanel", "sun.print.ServiceDialog", "MarginsPanel", $PRIVATE},
	{"sun.print.ServiceDialog$PageSetupPanel", "sun.print.ServiceDialog", "PageSetupPanel", $PRIVATE},
	{"sun.print.ServiceDialog$CopiesPanel", "sun.print.ServiceDialog", "CopiesPanel", $PRIVATE},
	{"sun.print.ServiceDialog$PrintRangePanel", "sun.print.ServiceDialog", "PrintRangePanel", $PRIVATE},
	{"sun.print.ServiceDialog$PrintServicePanel", "sun.print.ServiceDialog", "PrintServicePanel", $PRIVATE},
	{"sun.print.ServiceDialog$GeneralPanel", "sun.print.ServiceDialog", "GeneralPanel", $PRIVATE},
	{"sun.print.ServiceDialog$5", nullptr, nullptr, 0},
	{"sun.print.ServiceDialog$4", nullptr, nullptr, 0},
	{"sun.print.ServiceDialog$3", nullptr, nullptr, 0},
	{"sun.print.ServiceDialog$2", nullptr, nullptr, 0},
	{"sun.print.ServiceDialog$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ServiceDialog_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.print.ServiceDialog",
	"javax.swing.JDialog",
	"java.awt.event.ActionListener",
	_ServiceDialog_FieldInfo_,
	_ServiceDialog_MethodInfo_,
	nullptr,
	nullptr,
	_ServiceDialog_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.print.ServiceDialog$ValidatingFileChooser,sun.print.ServiceDialog$IconRadioButton,sun.print.ServiceDialog$IconRadioButton$1,sun.print.ServiceDialog$JobAttributesPanel,sun.print.ServiceDialog$SidesPanel,sun.print.ServiceDialog$QualityPanel,sun.print.ServiceDialog$ChromaticityPanel,sun.print.ServiceDialog$AppearancePanel,sun.print.ServiceDialog$OrientationPanel,sun.print.ServiceDialog$MediaPanel,sun.print.ServiceDialog$MarginsPanel,sun.print.ServiceDialog$PageSetupPanel,sun.print.ServiceDialog$CopiesPanel,sun.print.ServiceDialog$PrintRangePanel,sun.print.ServiceDialog$PrintServicePanel,sun.print.ServiceDialog$GeneralPanel,sun.print.ServiceDialog$5,sun.print.ServiceDialog$4,sun.print.ServiceDialog$3,sun.print.ServiceDialog$2,sun.print.ServiceDialog$1"
};

$Object* allocate$ServiceDialog($Class* clazz) {
	return $of($alloc(ServiceDialog));
}

$String* ServiceDialog::toString() {
	 return this->$JDialog::toString();
}

int32_t ServiceDialog::hashCode() {
	 return this->$JDialog::hashCode();
}

bool ServiceDialog::equals(Object$* arg0) {
	 return this->$JDialog::equals(arg0);
}

$Object* ServiceDialog::clone() {
	 return this->$JDialog::clone();
}

void ServiceDialog::finalize() {
	this->$JDialog::finalize();
}

$String* ServiceDialog::strBundle = nullptr;
$Insets* ServiceDialog::panelInsets = nullptr;
$Insets* ServiceDialog::compInsets = nullptr;
$ResourceBundle* ServiceDialog::messageRB = nullptr;
$Class* ServiceDialog::_keyEventClazz = nullptr;

void ServiceDialog::init$($GraphicsConfiguration* gc, int32_t x, int32_t y, $PrintServiceArray* services, int32_t defaultServiceIndex, $DocFlavor* flavor, $PrintRequestAttributeSet* attributes, $Window* window) {
	$init($Dialog);
	$JDialog::init$(window, $(getMsg("dialog.printtitle"_s)), $Dialog::DEFAULT_MODALITY_TYPE, gc);
	this->isAWT = false;
	initPrintDialog(x, y, services, defaultServiceIndex, flavor, attributes);
}

void ServiceDialog::initPrintDialog(int32_t x, int32_t y, $PrintServiceArray* services, int32_t defaultServiceIndex, $DocFlavor* flavor, $PrintRequestAttributeSet* attributes) {
	$useLocalCurrentObjectStackCache();
	$set(this, services, services);
	this->defaultServiceIndex = defaultServiceIndex;
	$set(this, asOriginal, attributes);
	$set(this, asCurrent, $new($HashPrintRequestAttributeSet, attributes));
	$set(this, psCurrent, $nc(services)->get(defaultServiceIndex));
	$set(this, docFlavor, flavor);
	$load($SunPageSelection);
	$var($SunPageSelection, pages, $cast($SunPageSelection, $nc(attributes)->get($SunPageSelection::class$)));
	if (pages != nullptr) {
		this->isAWT = true;
	}
	$load($DialogOwner);
	if (attributes->get($DialogOwner::class$) != nullptr) {
		$var($DialogOwner, owner, $cast($DialogOwner, attributes->get($DialogOwner::class$)));
		bool var$0 = (getOwner() == nullptr);
		if (!var$0) {
			var$0 = ($nc(owner)->getOwner() != getOwner());
		}
		if (var$0) {
			try {
				setAlwaysOnTop(true);
			} catch ($SecurityException& e) {
			}
		}
	}
	$var($Container, c, getContentPane());
	$nc(c)->setLayout($$new($BorderLayout));
	$set(this, tpTabs, $new($JTabbedPane));
	$nc(this->tpTabs)->setBorder($$new($EmptyBorder, 5, 5, 5, 5));
	$var($String, gkey, getMsg("tab.general"_s));
	int32_t gmnemonic = getVKMnemonic("tab.general"_s);
	$set(this, pnlGeneral, $new($ServiceDialog$GeneralPanel, this));
	$nc(this->tpTabs)->add(gkey, static_cast<$Component*>(this->pnlGeneral));
	$nc(this->tpTabs)->setMnemonicAt(0, gmnemonic);
	$var($String, pkey, getMsg("tab.pagesetup"_s));
	int32_t pmnemonic = getVKMnemonic("tab.pagesetup"_s);
	$set(this, pnlPageSetup, $new($ServiceDialog$PageSetupPanel, this));
	$nc(this->tpTabs)->add(pkey, static_cast<$Component*>(this->pnlPageSetup));
	$nc(this->tpTabs)->setMnemonicAt(1, pmnemonic);
	$var($String, akey, getMsg("tab.appearance"_s));
	int32_t amnemonic = getVKMnemonic("tab.appearance"_s);
	$set(this, pnlAppearance, $new($ServiceDialog$AppearancePanel, this));
	$nc(this->tpTabs)->add(akey, static_cast<$Component*>(this->pnlAppearance));
	$nc(this->tpTabs)->setMnemonicAt(2, amnemonic);
	$init($BorderLayout);
	c->add(static_cast<$Component*>(this->tpTabs), $of($BorderLayout::CENTER));
	updatePanels();
	$var($JPanel, pnlSouth, $new($JPanel, static_cast<$LayoutManager*>($$new($FlowLayout, $FlowLayout::TRAILING))));
	$set(this, btnApprove, createExitButton("button.print"_s, this));
	pnlSouth->add(static_cast<$Component*>(this->btnApprove));
	$nc($(getRootPane()))->setDefaultButton(this->btnApprove);
	$set(this, btnCancel, createExitButton("button.cancel"_s, this));
	handleEscKey(this->btnCancel);
	pnlSouth->add(static_cast<$Component*>(this->btnCancel));
	c->add(static_cast<$Component*>(pnlSouth), $of($BorderLayout::SOUTH));
	addWindowListener($$new($ServiceDialog$1, this));
	$nc($(getAccessibleContext()))->setAccessibleDescription($(getMsg("dialog.printtitle"_s)));
	setResizable(false);
	setLocation(x, y);
	pack();
}

void ServiceDialog::init$($GraphicsConfiguration* gc, int32_t x, int32_t y, $PrintService* ps, $DocFlavor* flavor, $PrintRequestAttributeSet* attributes, $Window* window) {
	$init($Dialog);
	$JDialog::init$(window, $(getMsg("dialog.pstitle"_s)), $Dialog::DEFAULT_MODALITY_TYPE, gc);
	this->isAWT = false;
	initPageDialog(x, y, ps, flavor, attributes);
}

void ServiceDialog::initPageDialog(int32_t x, int32_t y, $PrintService* ps, $DocFlavor* flavor, $PrintRequestAttributeSet* attributes) {
	$useLocalCurrentObjectStackCache();
	$set(this, psCurrent, ps);
	$set(this, docFlavor, flavor);
	$set(this, asOriginal, attributes);
	$set(this, asCurrent, $new($HashPrintRequestAttributeSet, attributes));
	$load($DialogOwner);
	if ($nc(attributes)->get($DialogOwner::class$) != nullptr) {
		$var($DialogOwner, owner, $cast($DialogOwner, attributes->get($DialogOwner::class$)));
		bool var$0 = (getOwner() == nullptr);
		if (!var$0) {
			var$0 = ($nc(owner)->getOwner() != getOwner());
		}
		if (var$0) {
			try {
				setAlwaysOnTop(true);
			} catch ($SecurityException& e) {
			}
		}
	}
	$var($Container, c, getContentPane());
	$nc(c)->setLayout($$new($BorderLayout));
	$set(this, pnlPageSetup, $new($ServiceDialog$PageSetupPanel, this));
	$init($BorderLayout);
	c->add(static_cast<$Component*>(this->pnlPageSetup), $of($BorderLayout::CENTER));
	$nc(this->pnlPageSetup)->updateInfo();
	$var($JPanel, pnlSouth, $new($JPanel, static_cast<$LayoutManager*>($$new($FlowLayout, $FlowLayout::TRAILING))));
	$set(this, btnApprove, createExitButton("button.ok"_s, this));
	pnlSouth->add(static_cast<$Component*>(this->btnApprove));
	$nc($(getRootPane()))->setDefaultButton(this->btnApprove);
	$set(this, btnCancel, createExitButton("button.cancel"_s, this));
	handleEscKey(this->btnCancel);
	pnlSouth->add(static_cast<$Component*>(this->btnCancel));
	c->add(static_cast<$Component*>(pnlSouth), $of($BorderLayout::SOUTH));
	addWindowListener($$new($ServiceDialog$2, this));
	$nc($(getAccessibleContext()))->setAccessibleDescription($(getMsg("dialog.pstitle"_s)));
	setResizable(false);
	setLocation(x, y);
	pack();
}

void ServiceDialog::handleEscKey($JButton* btnCancel) {
	$useLocalCurrentObjectStackCache();
	$var($Action, cancelKeyAction, $new($ServiceDialog$3, this));
	$var($KeyStroke, cancelKeyStroke, $KeyStroke::getKeyStroke((int32_t)(char16_t)$KeyEvent::VK_ESCAPE, 0));
	$var($InputMap, inputMap, $nc(btnCancel)->getInputMap($JComponent::WHEN_IN_FOCUSED_WINDOW));
	$var($ActionMap, actionMap, btnCancel->getActionMap());
	if (inputMap != nullptr && actionMap != nullptr) {
		inputMap->put(cancelKeyStroke, "cancel"_s);
		actionMap->put("cancel"_s, cancelKeyAction);
	}
}

int32_t ServiceDialog::getStatus() {
	return this->status;
}

$PrintRequestAttributeSet* ServiceDialog::getAttributes() {
	if (this->status == ServiceDialog::APPROVE) {
		return this->asCurrent;
	} else {
		return this->asOriginal;
	}
}

$PrintService* ServiceDialog::getPrintService() {
	if (this->status == ServiceDialog::APPROVE) {
		return this->psCurrent;
	} else {
		return nullptr;
	}
}

void ServiceDialog::dispose(int32_t status) {
	this->status = status;
	$JDialog::dispose();
}

void ServiceDialog::actionPerformed($ActionEvent* e) {
	$var($Object, source, $nc(e)->getSource());
	bool approved = false;
	if ($equals(source, this->btnApprove)) {
		approved = true;
		if (this->pnlGeneral != nullptr) {
			if ($nc(this->pnlGeneral)->isPrintToFileRequested()) {
				approved = showFileChooser();
			} else {
				$load($Destination);
				$nc(this->asCurrent)->remove($Destination::class$);
			}
		}
	}
	dispose(approved ? ServiceDialog::APPROVE : ServiceDialog::CANCEL);
}

bool ServiceDialog::showFileChooser() {
	$useLocalCurrentObjectStackCache();
	$load($Destination);
	$Class* dstCategory = $Destination::class$;
	$var($Destination, dst, $cast($Destination, $nc(this->asCurrent)->get(dstCategory)));
	if (dst == nullptr) {
		$assign(dst, $cast($Destination, $nc(this->asOriginal)->get(dstCategory)));
		if (dst == nullptr) {
			$assign(dst, $cast($Destination, $nc(this->psCurrent)->getDefaultAttributeValue(dstCategory)));
			if (dst == nullptr) {
				try {
					$assign(dst, $new($Destination, $$new($URI, "file:out.prn"_s)));
				} catch ($URISyntaxException& e) {
				}
			}
		}
	}
	$var($File, fileDest, nullptr);
	if (dst != nullptr) {
		try {
			$assign(fileDest, $new($File, $(dst->getURI())));
		} catch ($Exception& e) {
			$assign(fileDest, $new($File, "out.prn"_s));
		}
	} else {
		$assign(fileDest, $new($File, "out.prn"_s));
	}
	$var($ServiceDialog$ValidatingFileChooser, jfc, $new($ServiceDialog$ValidatingFileChooser, this));
	jfc->setApproveButtonText($(getMsg("button.ok"_s)));
	jfc->setDialogTitle($(getMsg("dialog.printtofile"_s)));
	jfc->setDialogType($JFileChooser::SAVE_DIALOG);
	jfc->setSelectedFile(fileDest);
	int32_t returnVal = jfc->showDialog(this, nullptr);
	if (returnVal == $JFileChooser::APPROVE_OPTION) {
		$assign(fileDest, jfc->getSelectedFile());
		try {
			$nc(this->asCurrent)->add(static_cast<$Attribute*>(static_cast<$PrintJobAttribute*>($$new($Destination, $($nc(fileDest)->toURI())))));
		} catch ($Exception& e) {
			$nc(this->asCurrent)->remove(dstCategory);
		}
	} else {
		$nc(this->asCurrent)->remove(dstCategory);
	}
	return (returnVal == $JFileChooser::APPROVE_OPTION);
}

void ServiceDialog::updatePanels() {
	$nc(this->pnlGeneral)->updateInfo();
	$nc(this->pnlPageSetup)->updateInfo();
	$nc(this->pnlAppearance)->updateInfo();
}

void ServiceDialog::initResource() {
	$init(ServiceDialog);
	$beforeCallerSensitive();
	$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($ServiceDialog$4)));
}

$String* ServiceDialog::getMsg($String* key) {
	$init(ServiceDialog);
	$useLocalCurrentObjectStackCache();
	try {
		return removeMnemonics($($nc(ServiceDialog::messageRB)->getString(key)));
	} catch ($MissingResourceException& e) {
		$throwNew($Error, $$str({"Fatal: Resource for ServiceUI is broken; there is no "_s, key, " key in resource"_s}));
	}
	$shouldNotReachHere();
}

$String* ServiceDialog::removeMnemonics($String* s) {
	$init(ServiceDialog);
	$useLocalCurrentObjectStackCache();
	int32_t i = $nc(s)->indexOf((int32_t)u'&');
	int32_t len = s->length();
	if (i < 0 || i == (len - 1)) {
		return s;
	}
	int32_t j = s->indexOf((int32_t)u'&', i + 1);
	if (j == i + 1) {
		if (j + 1 == len) {
			return s->substring(0, i + 1);
		} else {
			$var($String, var$0, $(s->substring(0, i + 1)));
			return $concat(var$0, $(removeMnemonics($(s->substring(j + 1)))));
		}
	}
	if (i == 0) {
		return removeMnemonics($(s->substring(1)));
	} else {
		$var($String, var$1, $(s->substring(0, i)));
		return ($concat(var$1, $(removeMnemonics($(s->substring(i + 1))))));
	}
}

char16_t ServiceDialog::getMnemonic($String* key) {
	$init(ServiceDialog);
	$useLocalCurrentObjectStackCache();
	$var($String, str, $nc($($nc(ServiceDialog::messageRB)->getString(key)))->replace(static_cast<$CharSequence*>("&&"_s), static_cast<$CharSequence*>(""_s)));
	int32_t index = str->indexOf((int32_t)u'&');
	if (0 <= index && index < str->length() - 1) {
		char16_t c = str->charAt(index + 1);
		return $Character::toUpperCase(c);
	} else {
		return (char16_t)0;
	}
}

int32_t ServiceDialog::getVKMnemonic($String* key) {
	$init(ServiceDialog);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($String, s, $String::valueOf(getMnemonic(key)));
	if (s == nullptr || s->length() != 1) {
		return 0;
	}
	$var($String, vkString, $str({"VK_"_s, $(s->toUpperCase())}));
	try {
		if (ServiceDialog::_keyEventClazz == nullptr) {
			$assignStatic(ServiceDialog::_keyEventClazz, $Class::forName("java.awt.event.KeyEvent"_s, true, $(ServiceDialog::class$->getClassLoader())));
		}
		$var($Field, field, $nc(ServiceDialog::_keyEventClazz)->getDeclaredField(vkString));
		int32_t value = $nc(field)->getInt(nullptr);
		return value;
	} catch ($Exception& e) {
	}
	return 0;
}

$URL* ServiceDialog::getImageResource($String* key) {
	$init(ServiceDialog);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($URL, url, $cast($URL, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($ServiceDialog$5, key)))));
	if (url == nullptr) {
		$throwNew($Error, $$str({"Fatal: Resource for ServiceUI is broken; there is no "_s, key, " key in resource"_s}));
	}
	return url;
}

$JButton* ServiceDialog::createButton($String* key, $ActionListener* al) {
	$init(ServiceDialog);
	$useLocalCurrentObjectStackCache();
	$var($JButton, btn, $new($JButton, $(getMsg(key))));
	btn->setMnemonic(getMnemonic(key));
	btn->addActionListener(al);
	return btn;
}

$JButton* ServiceDialog::createExitButton($String* key, $ActionListener* al) {
	$init(ServiceDialog);
	$useLocalCurrentObjectStackCache();
	$var($String, str, getMsg(key));
	$var($JButton, btn, $new($JButton, str));
	btn->addActionListener(al);
	$nc($(btn->getAccessibleContext()))->setAccessibleDescription(str);
	return btn;
}

$JCheckBox* ServiceDialog::createCheckBox($String* key, $ActionListener* al) {
	$init(ServiceDialog);
	$useLocalCurrentObjectStackCache();
	$var($JCheckBox, cb, $new($JCheckBox, $(getMsg(key))));
	cb->setMnemonic(getMnemonic(key));
	cb->addActionListener(al);
	return cb;
}

$JRadioButton* ServiceDialog::createRadioButton($String* key, $ActionListener* al) {
	$init(ServiceDialog);
	$useLocalCurrentObjectStackCache();
	$var($JRadioButton, rb, $new($JRadioButton, $(getMsg(key))));
	rb->setMnemonic(getMnemonic(key));
	rb->addActionListener(al);
	return rb;
}

void ServiceDialog::showNoPrintService($GraphicsConfiguration* gc) {
	$init(ServiceDialog);
	$useLocalCurrentObjectStackCache();
	$var($Frame, dlgFrame, $new($Frame, gc));
	$JOptionPane::showMessageDialog(dlgFrame, $(getMsg("dialog.noprintermsg"_s)));
	dlgFrame->dispose();
}

void ServiceDialog::addToGB($Component* comp, $Container* cont, $GridBagLayout* gridbag, $GridBagConstraints* constraints) {
	$init(ServiceDialog);
	$nc(gridbag)->setConstraints(comp, constraints);
	$nc(cont)->add(comp);
}

void ServiceDialog::addToBG($AbstractButton* button, $Container* cont, $ButtonGroup* bg) {
	$init(ServiceDialog);
	$nc(bg)->add(button);
	$nc(cont)->add(static_cast<$Component*>(button));
}

void clinit$ServiceDialog($Class* class$) {
	$assignStatic(ServiceDialog::strBundle, "sun.print.resources.serviceui"_s);
	$assignStatic(ServiceDialog::panelInsets, $new($Insets, 6, 6, 6, 6));
	$assignStatic(ServiceDialog::compInsets, $new($Insets, 3, 6, 3, 6));
	{
		ServiceDialog::initResource();
	}
	$assignStatic(ServiceDialog::_keyEventClazz, nullptr);
}

ServiceDialog::ServiceDialog() {
}

$Class* ServiceDialog::load$($String* name, bool initialize) {
	$loadClass(ServiceDialog, name, initialize, &_ServiceDialog_ClassInfo_, clinit$ServiceDialog, allocate$ServiceDialog);
	return class$;
}

$Class* ServiceDialog::class$ = nullptr;

	} // print
} // sun