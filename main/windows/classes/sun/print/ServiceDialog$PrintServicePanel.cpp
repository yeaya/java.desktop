#include <sun/print/ServiceDialog$PrintServicePanel.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dialog.h>
#include <java/awt/GridBagConstraints.h>
#include <java/awt/GridBagLayout.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/ItemEvent.h>
#include <java/awt/event/ItemListener.h>
#include <java/awt/print/PrinterJob.h>
#include <java/io/FilePermission.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/MalformedURLException.h>
#include <java/net/URI.h>
#include <java/net/URISyntaxException.h>
#include <java/net/URL.h>
#include <java/security/Permission.h>
#include <javax/print/DocFlavor.h>
#include <javax/print/PrintService.h>
#include <javax/print/ServiceUIFactory.h>
#include <javax/print/attribute/Attribute.h>
#include <javax/print/attribute/AttributeSet.h>
#include <javax/print/attribute/HashAttributeSet.h>
#include <javax/print/attribute/HashPrintRequestAttributeSet.h>
#include <javax/print/attribute/PrintJobAttribute.h>
#include <javax/print/attribute/PrintRequestAttributeSet.h>
#include <javax/print/attribute/PrintServiceAttribute.h>
#include <javax/print/attribute/standard/Destination.h>
#include <javax/print/attribute/standard/PrinterInfo.h>
#include <javax/print/attribute/standard/PrinterIsAcceptingJobs.h>
#include <javax/print/attribute/standard/PrinterMakeAndModel.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/BorderFactory.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JCheckBox.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDialog.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JToggleButton.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/TitledBorder.h>
#include <javax/swing/event/PopupMenuEvent.h>
#include <javax/swing/event/PopupMenuListener.h>
#include <sun/print/DocumentPropertiesUI.h>
#include <sun/print/PrinterJobWrapper.h>
#include <sun/print/ServiceDialog.h>
#include <jcpp.h>

#undef BOTH
#undef DOCPROPERTIESCLASSNAME
#undef DOCUMENTPROPERTIES_ROLE
#undef JDIALOG_UI
#undef MAIN_UIROLE
#undef RELATIVE
#undef REMAINDER
#undef SELECTED
#undef TRAILING

using $PrintServiceArray = $Array<::javax::print::PrintService>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dialog = ::java::awt::Dialog;
using $GridBagConstraints = ::java::awt::GridBagConstraints;
using $GridBagLayout = ::java::awt::GridBagLayout;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Window = ::java::awt::Window;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ItemEvent = ::java::awt::event::ItemEvent;
using $ItemListener = ::java::awt::event::ItemListener;
using $PrinterJob = ::java::awt::print::PrinterJob;
using $FilePermission = ::java::io::FilePermission;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $MalformedURLException = ::java::net::MalformedURLException;
using $URI = ::java::net::URI;
using $URISyntaxException = ::java::net::URISyntaxException;
using $URL = ::java::net::URL;
using $Permission = ::java::security::Permission;
using $EventObject = ::java::util::EventObject;
using $DocFlavor = ::javax::print::DocFlavor;
using $PrintService = ::javax::print::PrintService;
using $ServiceUIFactory = ::javax::print::ServiceUIFactory;
using $Attribute = ::javax::print::attribute::Attribute;
using $AttributeSet = ::javax::print::attribute::AttributeSet;
using $HashAttributeSet = ::javax::print::attribute::HashAttributeSet;
using $HashPrintRequestAttributeSet = ::javax::print::attribute::HashPrintRequestAttributeSet;
using $PrintJobAttribute = ::javax::print::attribute::PrintJobAttribute;
using $PrintRequestAttributeSet = ::javax::print::attribute::PrintRequestAttributeSet;
using $PrintServiceAttribute = ::javax::print::attribute::PrintServiceAttribute;
using $URISyntax = ::javax::print::attribute::URISyntax;
using $Destination = ::javax::print::attribute::standard::Destination;
using $PrinterInfo = ::javax::print::attribute::standard::PrinterInfo;
using $PrinterIsAcceptingJobs = ::javax::print::attribute::standard::PrinterIsAcceptingJobs;
using $PrinterMakeAndModel = ::javax::print::attribute::standard::PrinterMakeAndModel;
using $AbstractButton = ::javax::swing::AbstractButton;
using $BorderFactory = ::javax::swing::BorderFactory;
using $JButton = ::javax::swing::JButton;
using $JCheckBox = ::javax::swing::JCheckBox;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JDialog = ::javax::swing::JDialog;
using $JLabel = ::javax::swing::JLabel;
using $JPanel = ::javax::swing::JPanel;
using $JToggleButton = ::javax::swing::JToggleButton;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $TitledBorder = ::javax::swing::border::TitledBorder;
using $PopupMenuEvent = ::javax::swing::event::PopupMenuEvent;
using $PopupMenuListener = ::javax::swing::event::PopupMenuListener;
using $DocumentPropertiesUI = ::sun::print::DocumentPropertiesUI;
using $PrinterJobWrapper = ::sun::print::PrinterJobWrapper;
using $ServiceDialog = ::sun::print::ServiceDialog;

namespace sun {
	namespace print {

$FieldInfo _ServiceDialog$PrintServicePanel_FieldInfo_[] = {
	{"this$0", "Lsun/print/ServiceDialog;", nullptr, $FINAL | $SYNTHETIC, $field(ServiceDialog$PrintServicePanel, this$0)},
	{"strTitle", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ServiceDialog$PrintServicePanel, strTitle)},
	{"printToFilePermission", "Ljava/io/FilePermission;", nullptr, $PRIVATE, $field(ServiceDialog$PrintServicePanel, printToFilePermission)},
	{"btnProperties", "Ljavax/swing/JButton;", nullptr, $PRIVATE, $field(ServiceDialog$PrintServicePanel, btnProperties)},
	{"cbPrintToFile", "Ljavax/swing/JCheckBox;", nullptr, $PRIVATE, $field(ServiceDialog$PrintServicePanel, cbPrintToFile)},
	{"cbName", "Ljavax/swing/JComboBox;", "Ljavax/swing/JComboBox<Ljava/lang/String;>;", $PRIVATE, $field(ServiceDialog$PrintServicePanel, cbName)},
	{"lblType", "Ljavax/swing/JLabel;", nullptr, $PRIVATE, $field(ServiceDialog$PrintServicePanel, lblType)},
	{"lblStatus", "Ljavax/swing/JLabel;", nullptr, $PRIVATE, $field(ServiceDialog$PrintServicePanel, lblStatus)},
	{"lblInfo", "Ljavax/swing/JLabel;", nullptr, $PRIVATE, $field(ServiceDialog$PrintServicePanel, lblInfo)},
	{"uiFactory", "Ljavax/print/ServiceUIFactory;", nullptr, $PRIVATE, $field(ServiceDialog$PrintServicePanel, uiFactory)},
	{"changedService", "Z", nullptr, $PRIVATE, $field(ServiceDialog$PrintServicePanel, changedService)},
	{"filePermission", "Z", nullptr, $PRIVATE, $field(ServiceDialog$PrintServicePanel, filePermission)},
	{}
};

$MethodInfo _ServiceDialog$PrintServicePanel_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/print/ServiceDialog;)V", nullptr, $PUBLIC, $method(static_cast<void(ServiceDialog$PrintServicePanel::*)($ServiceDialog*)>(&ServiceDialog$PrintServicePanel::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"addLabel", "(Ljava/lang/String;Ljava/awt/GridBagLayout;Ljava/awt/GridBagConstraints;)Ljavax/swing/JLabel;", nullptr, $PRIVATE, $method(static_cast<$JLabel*(ServiceDialog$PrintServicePanel::*)($String*,$GridBagLayout*,$GridBagConstraints*)>(&ServiceDialog$PrintServicePanel::addLabel))},
	{"allowedToPrintToFile", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(ServiceDialog$PrintServicePanel::*)()>(&ServiceDialog$PrintServicePanel::allowedToPrintToFile))},
	{"isPrintToFileSelected", "()Z", nullptr, $PUBLIC},
	{"itemStateChanged", "(Ljava/awt/event/ItemEvent;)V", nullptr, $PUBLIC},
	{"popupMenuCanceled", "(Ljavax/swing/event/PopupMenuEvent;)V", nullptr, $PUBLIC},
	{"popupMenuWillBecomeInvisible", "(Ljavax/swing/event/PopupMenuEvent;)V", nullptr, $PUBLIC},
	{"popupMenuWillBecomeVisible", "(Ljavax/swing/event/PopupMenuEvent;)V", nullptr, $PUBLIC},
	{"throwPrintToFile", "()V", nullptr, $PRIVATE, $method(static_cast<void(ServiceDialog$PrintServicePanel::*)()>(&ServiceDialog$PrintServicePanel::throwPrintToFile))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateInfo", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ServiceDialog$PrintServicePanel_InnerClassesInfo_[] = {
	{"sun.print.ServiceDialog$PrintServicePanel", "sun.print.ServiceDialog", "PrintServicePanel", $PRIVATE},
	{}
};

$ClassInfo _ServiceDialog$PrintServicePanel_ClassInfo_ = {
	$ACC_SUPER,
	"sun.print.ServiceDialog$PrintServicePanel",
	"javax.swing.JPanel",
	"java.awt.event.ActionListener,java.awt.event.ItemListener,javax.swing.event.PopupMenuListener",
	_ServiceDialog$PrintServicePanel_FieldInfo_,
	_ServiceDialog$PrintServicePanel_MethodInfo_,
	nullptr,
	nullptr,
	_ServiceDialog$PrintServicePanel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.print.ServiceDialog"
};

$Object* allocate$ServiceDialog$PrintServicePanel($Class* clazz) {
	return $of($alloc(ServiceDialog$PrintServicePanel));
}

$String* ServiceDialog$PrintServicePanel::toString() {
	 return this->$JPanel::toString();
}

int32_t ServiceDialog$PrintServicePanel::hashCode() {
	 return this->$JPanel::hashCode();
}

bool ServiceDialog$PrintServicePanel::equals(Object$* arg0) {
	 return this->$JPanel::equals(arg0);
}

$Object* ServiceDialog$PrintServicePanel::clone() {
	 return this->$JPanel::clone();
}

void ServiceDialog$PrintServicePanel::finalize() {
	this->$JPanel::finalize();
}

void ServiceDialog$PrintServicePanel::init$($ServiceDialog* this$0) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$JPanel::init$();
	$set(this, strTitle, $ServiceDialog::getMsg("border.printservice"_s));
	this->changedService = false;
	$set(this, uiFactory, $nc(this$0->psCurrent)->getServiceUIFactory());
	$var($GridBagLayout, gridbag, $new($GridBagLayout));
	$var($GridBagConstraints, c, $new($GridBagConstraints));
	setLayout(gridbag);
	setBorder($($BorderFactory::createTitledBorder(this->strTitle)));
	$var($StringArray, psnames, $new($StringArray, $nc(this$0->services)->length));
	for (int32_t i = 0; i < psnames->length; ++i) {
		psnames->set(i, $($nc($nc(this$0->services)->get(i))->getName()));
	}
	$set(this, cbName, $new($JComboBox, psnames));
	$nc(this->cbName)->setSelectedIndex(this$0->defaultServiceIndex);
	$nc(this->cbName)->addItemListener(this);
	$nc(this->cbName)->addPopupMenuListener(this);
	c->fill = $GridBagConstraints::BOTH;
	$set(c, insets, $ServiceDialog::compInsets);
	c->weightx = 0.0;
	$var($JLabel, lblName, $new($JLabel, $($ServiceDialog::getMsg("label.psname"_s)), $JLabel::TRAILING));
	lblName->setDisplayedMnemonic($ServiceDialog::getMnemonic("label.psname"_s));
	lblName->setLabelFor(this->cbName);
	$ServiceDialog::addToGB(lblName, this, gridbag, c);
	c->weightx = 1.0;
	c->gridwidth = $GridBagConstraints::RELATIVE;
	$ServiceDialog::addToGB(this->cbName, this, gridbag, c);
	c->weightx = 0.0;
	c->gridwidth = $GridBagConstraints::REMAINDER;
	$set(this, btnProperties, $ServiceDialog::createButton("button.properties"_s, this));
	$ServiceDialog::addToGB(this->btnProperties, this, gridbag, c);
	c->weighty = 1.0;
	$set(this, lblStatus, addLabel($($ServiceDialog::getMsg("label.status"_s)), gridbag, c));
	$nc(this->lblStatus)->setLabelFor(nullptr);
	$set(this, lblType, addLabel($($ServiceDialog::getMsg("label.pstype"_s)), gridbag, c));
	$nc(this->lblType)->setLabelFor(nullptr);
	c->gridwidth = 1;
	$ServiceDialog::addToGB($$new($JLabel, $($ServiceDialog::getMsg("label.info"_s)), $JLabel::TRAILING), this, gridbag, c);
	c->gridwidth = $GridBagConstraints::RELATIVE;
	$set(this, lblInfo, $new($JLabel));
	$nc(this->lblInfo)->setLabelFor(nullptr);
	$ServiceDialog::addToGB(this->lblInfo, this, gridbag, c);
	c->gridwidth = $GridBagConstraints::REMAINDER;
	$set(this, cbPrintToFile, $ServiceDialog::createCheckBox("checkbox.printtofile"_s, this));
	$ServiceDialog::addToGB(this->cbPrintToFile, this, gridbag, c);
	this->filePermission = allowedToPrintToFile();
}

bool ServiceDialog$PrintServicePanel::isPrintToFileSelected() {
	return $nc(this->cbPrintToFile)->isSelected();
}

$JLabel* ServiceDialog$PrintServicePanel::addLabel($String* text, $GridBagLayout* gridbag, $GridBagConstraints* c) {
	$useLocalCurrentObjectStackCache();
	$nc(c)->gridwidth = 1;
	$ServiceDialog::addToGB($$new($JLabel, text, $JLabel::TRAILING), this, gridbag, c);
	c->gridwidth = $GridBagConstraints::REMAINDER;
	$var($JLabel, label, $new($JLabel));
	$ServiceDialog::addToGB(label, this, gridbag, c);
	return label;
}

void ServiceDialog$PrintServicePanel::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($Object, source, $nc(e)->getSource());
	if ($equals(source, this->btnProperties)) {
		if (this->uiFactory != nullptr) {
			$init($ServiceUIFactory);
			$var($JDialog, dialog, $cast($JDialog, $nc(this->uiFactory)->getUI($ServiceUIFactory::MAIN_UIROLE, $ServiceUIFactory::JDIALOG_UI)));
			if (dialog != nullptr) {
				dialog->show();
			} else {
				$var($DocumentPropertiesUI, docPropertiesUI, nullptr);
				try {
					$init($DocumentPropertiesUI);
					$assign(docPropertiesUI, $cast($DocumentPropertiesUI, $nc(this->uiFactory)->getUI($DocumentPropertiesUI::DOCUMENTPROPERTIES_ROLE, $DocumentPropertiesUI::DOCPROPERTIESCLASSNAME)));
				} catch ($Exception&) {
					$catch();
				}
				if (docPropertiesUI != nullptr) {
					$load($PrinterJobWrapper);
					$var($PrinterJobWrapper, wrapper, $cast($PrinterJobWrapper, $nc(this->this$0->asCurrent)->get($PrinterJobWrapper::class$)));
					if (wrapper == nullptr) {
						return;
					}
					$var($PrinterJob, job, $nc(wrapper)->getPrinterJob());
					if (job == nullptr) {
						return;
					}
					$var($PrintRequestAttributeSet, newAttrs, docPropertiesUI->showDocumentProperties(job, this->this$0, this->this$0->psCurrent, this->this$0->asCurrent));
					if (newAttrs != nullptr) {
						$nc(this->this$0->asCurrent)->addAll(newAttrs);
						this->this$0->updatePanels();
					}
				}
			}
		}
	}
}

void ServiceDialog$PrintServicePanel::itemStateChanged($ItemEvent* e) {
	$useLocalCurrentObjectStackCache();
	if ($nc(e)->getStateChange() == $ItemEvent::SELECTED) {
		int32_t index = $nc(this->cbName)->getSelectedIndex();
		if ((index >= 0) && (index < $nc(this->this$0->services)->length)) {
			if (!$nc($nc(this->this$0->services)->get(index))->equals(this->this$0->psCurrent)) {
				$set(this->this$0, psCurrent, $nc(this->this$0->services)->get(index));
				$set(this, uiFactory, $nc(this->this$0->psCurrent)->getServiceUIFactory());
				this->changedService = true;
				$load($Destination);
				$var($Destination, dest, $cast($Destination, $nc(this->this$0->asOriginal)->get($Destination::class$)));
				bool var$0 = (dest != nullptr || isPrintToFileSelected());
				if (var$0 && $nc(this->this$0->psCurrent)->isAttributeCategorySupported($Destination::class$)) {
					if (dest != nullptr) {
						$nc(this->this$0->asCurrent)->add(static_cast<$Attribute*>(static_cast<$PrintJobAttribute*>(dest)));
					} else {
						$assign(dest, $cast($Destination, $nc(this->this$0->psCurrent)->getDefaultAttributeValue($Destination::class$)));
						if (dest == nullptr) {
							try {
								$assign(dest, $new($Destination, $$new($URI, "file:out.prn"_s)));
							} catch ($URISyntaxException&) {
								$catch();
							}
						}
						if (dest != nullptr) {
							$nc(this->this$0->asCurrent)->add(static_cast<$Attribute*>(static_cast<$PrintJobAttribute*>(dest)));
						}
					}
				} else {
					$nc(this->this$0->asCurrent)->remove($Destination::class$);
				}
			}
		}
	}
}

void ServiceDialog$PrintServicePanel::popupMenuWillBecomeVisible($PopupMenuEvent* e) {
	this->changedService = false;
}

void ServiceDialog$PrintServicePanel::popupMenuWillBecomeInvisible($PopupMenuEvent* e) {
	if (this->changedService) {
		this->changedService = false;
		this->this$0->updatePanels();
	}
}

void ServiceDialog$PrintServicePanel::popupMenuCanceled($PopupMenuEvent* e) {
}

bool ServiceDialog$PrintServicePanel::allowedToPrintToFile() {
	try {
		throwPrintToFile();
		return true;
	} catch ($SecurityException&) {
		$var($SecurityException, e, $catch());
		return false;
	}
	$shouldNotReachHere();
}

void ServiceDialog$PrintServicePanel::throwPrintToFile() {
	$var($SecurityManager, security, $System::getSecurityManager());
	if (security != nullptr) {
		if (this->printToFilePermission == nullptr) {
			$set(this, printToFilePermission, $new($FilePermission, "<<ALL FILES>>"_s, "read,write"_s));
		}
		security->checkPermission(this->printToFilePermission);
	}
}

void ServiceDialog$PrintServicePanel::updateInfo() {
	$useLocalCurrentObjectStackCache();
	$load($Destination);
	$Class* dstCategory = $Destination::class$;
	bool dstSupported = false;
	bool dstSelected = false;
	bool dstAllowed = this->filePermission ? allowedToPrintToFile() : false;
	$var($Destination, dst, $cast($Destination, $nc(this->this$0->asCurrent)->get(dstCategory)));
	if (dst != nullptr) {
		try {
			$nc($(dst->getURI()))->toURL();
			if ($nc(this->this$0->psCurrent)->isAttributeValueSupported(static_cast<$Attribute*>(static_cast<$PrintJobAttribute*>(dst)), this->this$0->docFlavor, static_cast<$AttributeSet*>(static_cast<$HashAttributeSet*>(this->this$0->asCurrent)))) {
				dstSupported = true;
				dstSelected = true;
			}
		} catch ($MalformedURLException&) {
			$var($MalformedURLException, ex, $catch());
			dstSupported = true;
		}
	} else if ($nc(this->this$0->psCurrent)->isAttributeCategorySupported(dstCategory)) {
		dstSupported = true;
	}
	$nc(this->cbPrintToFile)->setEnabled(dstSupported && dstAllowed);
	$nc(this->cbPrintToFile)->setSelected(dstSelected && dstAllowed && dstSupported);
	$load($PrinterMakeAndModel);
	$var($Attribute, type, $nc(this->this$0->psCurrent)->getAttribute($PrinterMakeAndModel::class$));
	if (type != nullptr) {
		$nc(this->lblType)->setText($($of(type)->toString()));
	}
	$load($PrinterIsAcceptingJobs);
	$var($Attribute, status, $nc(this->this$0->psCurrent)->getAttribute($PrinterIsAcceptingJobs::class$));
	if (status != nullptr) {
		$nc(this->lblStatus)->setText($($ServiceDialog::getMsg($($of(status)->toString()))));
	}
	$load($PrinterInfo);
	$var($Attribute, info, $nc(this->this$0->psCurrent)->getAttribute($PrinterInfo::class$));
	if (info != nullptr) {
		$nc(this->lblInfo)->setText($($of(info)->toString()));
	}
	$var($PrinterJob, job, nullptr);
	$load($PrinterJobWrapper);
	$var($PrinterJobWrapper, wrapper, $cast($PrinterJobWrapper, $nc(this->this$0->asCurrent)->get($PrinterJobWrapper::class$)));
	if (wrapper != nullptr) {
		$assign(job, wrapper->getPrinterJob());
	}
	$nc(this->btnProperties)->setEnabled(this->uiFactory != nullptr && job != nullptr);
}

ServiceDialog$PrintServicePanel::ServiceDialog$PrintServicePanel() {
}

$Class* ServiceDialog$PrintServicePanel::load$($String* name, bool initialize) {
	$loadClass(ServiceDialog$PrintServicePanel, name, initialize, &_ServiceDialog$PrintServicePanel_ClassInfo_, allocate$ServiceDialog$PrintServicePanel);
	return class$;
}

$Class* ServiceDialog$PrintServicePanel::class$ = nullptr;

	} // print
} // sun