#include <sun/print/ServiceDialog$CopiesPanel.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/GridBagConstraints.h>
#include <java/awt/GridBagLayout.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Comparable.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Number.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/print/DocFlavor.h>
#include <javax/print/PrintService.h>
#include <javax/print/attribute/Attribute.h>
#include <javax/print/attribute/AttributeSet.h>
#include <javax/print/attribute/DocAttribute.h>
#include <javax/print/attribute/HashAttributeSet.h>
#include <javax/print/attribute/HashPrintRequestAttributeSet.h>
#include <javax/print/attribute/PrintRequestAttribute.h>
#include <javax/print/attribute/standard/Copies.h>
#include <javax/print/attribute/standard/CopiesSupported.h>
#include <javax/print/attribute/standard/SheetCollate.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/AbstractSpinnerModel.h>
#include <javax/swing/BorderFactory.h>
#include <javax/swing/JCheckBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JSpinner$NumberEditor.h>
#include <javax/swing/JSpinner.h>
#include <javax/swing/JToggleButton.h>
#include <javax/swing/SpinnerModel.h>
#include <javax/swing/SpinnerNumberModel.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/TitledBorder.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ChangeListener.h>
#include <sun/print/ServiceDialog.h>
#include <jcpp.h>

#undef COLLATED
#undef HORIZONTAL
#undef MAX_VALUE
#undef REMAINDER
#undef TRAILING
#undef UNCOLLATED

using $intArray2 = $Array<int32_t, 2>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $GridBagConstraints = ::java::awt::GridBagConstraints;
using $GridBagLayout = ::java::awt::GridBagLayout;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $DocFlavor = ::javax::print::DocFlavor;
using $PrintService = ::javax::print::PrintService;
using $Attribute = ::javax::print::attribute::Attribute;
using $AttributeSet = ::javax::print::attribute::AttributeSet;
using $DocAttribute = ::javax::print::attribute::DocAttribute;
using $HashAttributeSet = ::javax::print::attribute::HashAttributeSet;
using $HashPrintRequestAttributeSet = ::javax::print::attribute::HashPrintRequestAttributeSet;
using $IntegerSyntax = ::javax::print::attribute::IntegerSyntax;
using $PrintRequestAttribute = ::javax::print::attribute::PrintRequestAttribute;
using $SetOfIntegerSyntax = ::javax::print::attribute::SetOfIntegerSyntax;
using $Copies = ::javax::print::attribute::standard::Copies;
using $CopiesSupported = ::javax::print::attribute::standard::CopiesSupported;
using $SheetCollate = ::javax::print::attribute::standard::SheetCollate;
using $AbstractButton = ::javax::swing::AbstractButton;
using $AbstractSpinnerModel = ::javax::swing::AbstractSpinnerModel;
using $BorderFactory = ::javax::swing::BorderFactory;
using $JCheckBox = ::javax::swing::JCheckBox;
using $JComponent = ::javax::swing::JComponent;
using $JFormattedTextField = ::javax::swing::JFormattedTextField;
using $JLabel = ::javax::swing::JLabel;
using $JPanel = ::javax::swing::JPanel;
using $JSpinner = ::javax::swing::JSpinner;
using $JSpinner$DefaultEditor = ::javax::swing::JSpinner$DefaultEditor;
using $JSpinner$NumberEditor = ::javax::swing::JSpinner$NumberEditor;
using $JTextField = ::javax::swing::JTextField;
using $JToggleButton = ::javax::swing::JToggleButton;
using $SpinnerModel = ::javax::swing::SpinnerModel;
using $SpinnerNumberModel = ::javax::swing::SpinnerNumberModel;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $TitledBorder = ::javax::swing::border::TitledBorder;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $ServiceDialog = ::sun::print::ServiceDialog;

namespace sun {
	namespace print {

$FieldInfo _ServiceDialog$CopiesPanel_FieldInfo_[] = {
	{"this$0", "Lsun/print/ServiceDialog;", nullptr, $FINAL | $SYNTHETIC, $field(ServiceDialog$CopiesPanel, this$0)},
	{"strTitle", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ServiceDialog$CopiesPanel, strTitle)},
	{"snModel", "Ljavax/swing/SpinnerNumberModel;", nullptr, $PRIVATE, $field(ServiceDialog$CopiesPanel, snModel)},
	{"spinCopies", "Ljavax/swing/JSpinner;", nullptr, $PRIVATE, $field(ServiceDialog$CopiesPanel, spinCopies)},
	{"lblCopies", "Ljavax/swing/JLabel;", nullptr, $PRIVATE, $field(ServiceDialog$CopiesPanel, lblCopies)},
	{"cbCollate", "Ljavax/swing/JCheckBox;", nullptr, $PRIVATE, $field(ServiceDialog$CopiesPanel, cbCollate)},
	{"scSupported", "Z", nullptr, $PRIVATE, $field(ServiceDialog$CopiesPanel, scSupported)},
	{}
};

$MethodInfo _ServiceDialog$CopiesPanel_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/print/ServiceDialog;)V", nullptr, $PUBLIC, $method(static_cast<void(ServiceDialog$CopiesPanel::*)($ServiceDialog*)>(&ServiceDialog$CopiesPanel::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateCollateCB", "()V", nullptr, $PRIVATE, $method(static_cast<void(ServiceDialog$CopiesPanel::*)()>(&ServiceDialog$CopiesPanel::updateCollateCB))},
	{"updateInfo", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ServiceDialog$CopiesPanel_InnerClassesInfo_[] = {
	{"sun.print.ServiceDialog$CopiesPanel", "sun.print.ServiceDialog", "CopiesPanel", $PRIVATE},
	{}
};

$ClassInfo _ServiceDialog$CopiesPanel_ClassInfo_ = {
	$ACC_SUPER,
	"sun.print.ServiceDialog$CopiesPanel",
	"javax.swing.JPanel",
	"java.awt.event.ActionListener,javax.swing.event.ChangeListener",
	_ServiceDialog$CopiesPanel_FieldInfo_,
	_ServiceDialog$CopiesPanel_MethodInfo_,
	nullptr,
	nullptr,
	_ServiceDialog$CopiesPanel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.print.ServiceDialog"
};

$Object* allocate$ServiceDialog$CopiesPanel($Class* clazz) {
	return $of($alloc(ServiceDialog$CopiesPanel));
}

$String* ServiceDialog$CopiesPanel::toString() {
	 return this->$JPanel::toString();
}

int32_t ServiceDialog$CopiesPanel::hashCode() {
	 return this->$JPanel::hashCode();
}

bool ServiceDialog$CopiesPanel::equals(Object$* arg0) {
	 return this->$JPanel::equals(arg0);
}

$Object* ServiceDialog$CopiesPanel::clone() {
	 return this->$JPanel::clone();
}

void ServiceDialog$CopiesPanel::finalize() {
	this->$JPanel::finalize();
}

void ServiceDialog$CopiesPanel::init$($ServiceDialog* this$0) {
	$set(this, this$0, this$0);
	$JPanel::init$();
	$set(this, strTitle, $ServiceDialog::getMsg("border.copies"_s));
	$var($GridBagLayout, gridbag, $new($GridBagLayout));
	$var($GridBagConstraints, c, $new($GridBagConstraints));
	setLayout(gridbag);
	setBorder($($BorderFactory::createTitledBorder(this->strTitle)));
	c->fill = $GridBagConstraints::HORIZONTAL;
	$set(c, insets, $ServiceDialog::compInsets);
	$set(this, lblCopies, $new($JLabel, $($ServiceDialog::getMsg("label.numcopies"_s)), $JLabel::TRAILING));
	$nc(this->lblCopies)->setDisplayedMnemonic($ServiceDialog::getMnemonic("label.numcopies"_s));
	$nc($($nc(this->lblCopies)->getAccessibleContext()))->setAccessibleName($($ServiceDialog::getMsg("label.numcopies"_s)));
	$ServiceDialog::addToGB(this->lblCopies, this, gridbag, c);
	$set(this, snModel, $new($SpinnerNumberModel, 1, 1, 999, 1));
	$set(this, spinCopies, $new($JSpinner, this->snModel));
	$nc(this->lblCopies)->setLabelFor(this->spinCopies);
	$nc($($nc(($cast($JSpinner$NumberEditor, $($nc(this->spinCopies)->getEditor()))))->getTextField()))->setColumns(3);
	$nc(this->spinCopies)->addChangeListener(this);
	c->gridwidth = $GridBagConstraints::REMAINDER;
	$ServiceDialog::addToGB(this->spinCopies, this, gridbag, c);
	$set(this, cbCollate, $ServiceDialog::createCheckBox("checkbox.collate"_s, this));
	$nc(this->cbCollate)->setEnabled(false);
	$ServiceDialog::addToGB(this->cbCollate, this, gridbag, c);
}

void ServiceDialog$CopiesPanel::actionPerformed($ActionEvent* e) {
	if ($nc(this->cbCollate)->isSelected()) {
		$init($SheetCollate);
		$nc(this->this$0->asCurrent)->add(static_cast<$Attribute*>(static_cast<$DocAttribute*>($SheetCollate::COLLATED)));
	} else {
		$init($SheetCollate);
		$nc(this->this$0->asCurrent)->add(static_cast<$Attribute*>(static_cast<$DocAttribute*>($SheetCollate::UNCOLLATED)));
	}
}

void ServiceDialog$CopiesPanel::stateChanged($ChangeEvent* e) {
	updateCollateCB();
	$nc(this->this$0->asCurrent)->add(static_cast<$Attribute*>(static_cast<$PrintRequestAttribute*>($$new($Copies, $nc($($nc(this->snModel)->getNumber()))->intValue()))));
}

void ServiceDialog$CopiesPanel::updateCollateCB() {
	int32_t num = $nc($($nc(this->snModel)->getNumber()))->intValue();
	if (this->this$0->isAWT) {
		$nc(this->cbCollate)->setEnabled(true);
	} else {
		$nc(this->cbCollate)->setEnabled((num > 1) && this->scSupported);
	}
}

void ServiceDialog$CopiesPanel::updateInfo() {
	$load($Copies);
	$Class* cpCategory = $Copies::class$;
	$load($SheetCollate);
	$Class* scCategory = $SheetCollate::class$;
	bool cpSupported = false;
	this->scSupported = false;
	if ($nc(this->this$0->psCurrent)->isAttributeCategorySupported(cpCategory)) {
		cpSupported = true;
	}
	$var($CopiesSupported, cs, $cast($CopiesSupported, $nc(this->this$0->psCurrent)->getSupportedAttributeValues(cpCategory, nullptr, nullptr)));
	if (cs == nullptr) {
		$assign(cs, $new($CopiesSupported, 1, 999));
	}
	$var($Copies, cp, $cast($Copies, $nc(this->this$0->asCurrent)->get(cpCategory)));
	if (cp == nullptr) {
		$assign(cp, $cast($Copies, $nc(this->this$0->psCurrent)->getDefaultAttributeValue(cpCategory)));
		if (cp == nullptr) {
			$assign(cp, $new($Copies, 1));
		}
	}
	$nc(this->spinCopies)->setEnabled(cpSupported);
	$nc(this->lblCopies)->setEnabled(cpSupported);
	$var($intArray2, members, $nc(cs)->getMembers());
	int32_t min = 0;
	int32_t max = 0;
	if (($nc(members)->length > 0) && ($nc(members->get(0))->length > 0)) {
		min = $nc(members->get(0))->get(0);
		max = $nc(members->get(0))->get(1);
	} else {
		min = 1;
		max = $Integer::MAX_VALUE;
	}
	$nc(this->snModel)->setMinimum($($Integer::valueOf(min)));
	$nc(this->snModel)->setMaximum($($Integer::valueOf(max)));
	int32_t value = $nc(cp)->getValue();
	if ((value < min) || (value > max)) {
		value = min;
	}
	$nc(this->snModel)->setValue($($Integer::valueOf(value)));
	if ($nc(this->this$0->psCurrent)->isAttributeCategorySupported(scCategory)) {
		this->scSupported = true;
	}
	$var($SheetCollate, sc, $cast($SheetCollate, $nc(this->this$0->asCurrent)->get(scCategory)));
	if (sc == nullptr) {
		$assign(sc, $cast($SheetCollate, $nc(this->this$0->psCurrent)->getDefaultAttributeValue(scCategory)));
		if (sc == nullptr) {
			$init($SheetCollate);
			$assign(sc, $SheetCollate::UNCOLLATED);
		}
		if (sc != nullptr && !$nc(this->this$0->psCurrent)->isAttributeValueSupported(static_cast<$Attribute*>(static_cast<$DocAttribute*>(sc)), this->this$0->docFlavor, static_cast<$AttributeSet*>(static_cast<$HashAttributeSet*>(this->this$0->asCurrent)))) {
			this->scSupported = false;
		}
	} else if (!$nc(this->this$0->psCurrent)->isAttributeValueSupported(static_cast<$Attribute*>(static_cast<$DocAttribute*>(sc)), this->this$0->docFlavor, static_cast<$AttributeSet*>(static_cast<$HashAttributeSet*>(this->this$0->asCurrent)))) {
		this->scSupported = false;
	}
	$init($SheetCollate);
	$nc(this->cbCollate)->setSelected(sc == $SheetCollate::COLLATED && this->scSupported);
	updateCollateCB();
}

ServiceDialog$CopiesPanel::ServiceDialog$CopiesPanel() {
}

$Class* ServiceDialog$CopiesPanel::load$($String* name, bool initialize) {
	$loadClass(ServiceDialog$CopiesPanel, name, initialize, &_ServiceDialog$CopiesPanel_ClassInfo_, allocate$ServiceDialog$CopiesPanel);
	return class$;
}

$Class* ServiceDialog$CopiesPanel::class$ = nullptr;

	} // print
} // sun