#include <sun/print/ServiceDialog$PrintRangePanel.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/GridBagConstraints.h>
#include <java/awt/GridBagLayout.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/FocusListener.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Comparable.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/DecimalFormat.h>
#include <java/text/NumberFormat.h>
#include <java/util/EventObject.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/print/DocFlavor.h>
#include <javax/print/PrintService.h>
#include <javax/print/attribute/Attribute.h>
#include <javax/print/attribute/AttributeSet.h>
#include <javax/print/attribute/DocAttribute.h>
#include <javax/print/attribute/HashAttributeSet.h>
#include <javax/print/attribute/HashPrintRequestAttributeSet.h>
#include <javax/print/attribute/PrintRequestAttribute.h>
#include <javax/print/attribute/standard/PageRanges.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/BorderFactory.h>
#include <javax/swing/ButtonGroup.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFormattedTextField$AbstractFormatter.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JRadioButton.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/JToggleButton.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/TitledBorder.h>
#include <javax/swing/text/DefaultFormatter.h>
#include <javax/swing/text/InternationalFormatter.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/NumberFormatter.h>
#include <sun/print/ServiceDialog.h>
#include <sun/print/SunPageSelection.h>
#include <jcpp.h>

#undef ALL
#undef BOTH
#undef LEADING
#undef MAX_VALUE
#undef PERSIST
#undef RANGE
#undef REMAINDER
#undef SELECTION

using $intArray2 = $Array<int32_t, 2>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $FlowLayout = ::java::awt::FlowLayout;
using $GridBagConstraints = ::java::awt::GridBagConstraints;
using $GridBagLayout = ::java::awt::GridBagLayout;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $FocusListener = ::java::awt::event::FocusListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Comparable = ::java::lang::Comparable;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $DecimalFormat = ::java::text::DecimalFormat;
using $NumberFormat = ::java::text::NumberFormat;
using $EventObject = ::java::util::EventObject;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $DocFlavor = ::javax::print::DocFlavor;
using $PrintService = ::javax::print::PrintService;
using $Attribute = ::javax::print::attribute::Attribute;
using $AttributeSet = ::javax::print::attribute::AttributeSet;
using $DocAttribute = ::javax::print::attribute::DocAttribute;
using $HashAttributeSet = ::javax::print::attribute::HashAttributeSet;
using $HashPrintRequestAttributeSet = ::javax::print::attribute::HashPrintRequestAttributeSet;
using $PrintRequestAttribute = ::javax::print::attribute::PrintRequestAttribute;
using $SetOfIntegerSyntax = ::javax::print::attribute::SetOfIntegerSyntax;
using $PageRanges = ::javax::print::attribute::standard::PageRanges;
using $AbstractButton = ::javax::swing::AbstractButton;
using $BorderFactory = ::javax::swing::BorderFactory;
using $ButtonGroup = ::javax::swing::ButtonGroup;
using $JComponent = ::javax::swing::JComponent;
using $JFormattedTextField = ::javax::swing::JFormattedTextField;
using $JFormattedTextField$AbstractFormatter = ::javax::swing::JFormattedTextField$AbstractFormatter;
using $JLabel = ::javax::swing::JLabel;
using $JPanel = ::javax::swing::JPanel;
using $JRadioButton = ::javax::swing::JRadioButton;
using $JTextField = ::javax::swing::JTextField;
using $JToggleButton = ::javax::swing::JToggleButton;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $TitledBorder = ::javax::swing::border::TitledBorder;
using $DefaultFormatter = ::javax::swing::text::DefaultFormatter;
using $InternationalFormatter = ::javax::swing::text::InternationalFormatter;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $NumberFormatter = ::javax::swing::text::NumberFormatter;
using $ServiceDialog = ::sun::print::ServiceDialog;
using $SunPageSelection = ::sun::print::SunPageSelection;

namespace sun {
	namespace print {

$FieldInfo _ServiceDialog$PrintRangePanel_FieldInfo_[] = {
	{"this$0", "Lsun/print/ServiceDialog;", nullptr, $FINAL | $SYNTHETIC, $field(ServiceDialog$PrintRangePanel, this$0)},
	{"strTitle", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ServiceDialog$PrintRangePanel, strTitle)},
	{"prAll", "Ljavax/print/attribute/standard/PageRanges;", nullptr, $PRIVATE | $FINAL, $field(ServiceDialog$PrintRangePanel, prAll)},
	{"rbAll", "Ljavax/swing/JRadioButton;", nullptr, $PRIVATE, $field(ServiceDialog$PrintRangePanel, rbAll)},
	{"rbPages", "Ljavax/swing/JRadioButton;", nullptr, $PRIVATE, $field(ServiceDialog$PrintRangePanel, rbPages)},
	{"rbSelect", "Ljavax/swing/JRadioButton;", nullptr, $PRIVATE, $field(ServiceDialog$PrintRangePanel, rbSelect)},
	{"tfRangeFrom", "Ljavax/swing/JFormattedTextField;", nullptr, $PRIVATE, $field(ServiceDialog$PrintRangePanel, tfRangeFrom)},
	{"tfRangeTo", "Ljavax/swing/JFormattedTextField;", nullptr, $PRIVATE, $field(ServiceDialog$PrintRangePanel, tfRangeTo)},
	{"lblRangeTo", "Ljavax/swing/JLabel;", nullptr, $PRIVATE, $field(ServiceDialog$PrintRangePanel, lblRangeTo)},
	{"prSupported", "Z", nullptr, $PRIVATE, $field(ServiceDialog$PrintRangePanel, prSupported)},
	{"prPgRngSupported", "Z", nullptr, $PRIVATE, $field(ServiceDialog$PrintRangePanel, prPgRngSupported)},
	{}
};

$MethodInfo _ServiceDialog$PrintRangePanel_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/print/ServiceDialog;)V", nullptr, $PUBLIC, $method(static_cast<void(ServiceDialog$PrintRangePanel::*)($ServiceDialog*)>(&ServiceDialog$PrintRangePanel::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"setupRangeWidgets", "()V", nullptr, $PRIVATE, $method(static_cast<void(ServiceDialog$PrintRangePanel::*)()>(&ServiceDialog$PrintRangePanel::setupRangeWidgets))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateInfo", "()V", nullptr, $PUBLIC},
	{"updateRangeAttribute", "()V", nullptr, $PRIVATE, $method(static_cast<void(ServiceDialog$PrintRangePanel::*)()>(&ServiceDialog$PrintRangePanel::updateRangeAttribute))},
	{}
};

$InnerClassInfo _ServiceDialog$PrintRangePanel_InnerClassesInfo_[] = {
	{"sun.print.ServiceDialog$PrintRangePanel", "sun.print.ServiceDialog", "PrintRangePanel", $PRIVATE},
	{}
};

$ClassInfo _ServiceDialog$PrintRangePanel_ClassInfo_ = {
	$ACC_SUPER,
	"sun.print.ServiceDialog$PrintRangePanel",
	"javax.swing.JPanel",
	"java.awt.event.ActionListener,java.awt.event.FocusListener",
	_ServiceDialog$PrintRangePanel_FieldInfo_,
	_ServiceDialog$PrintRangePanel_MethodInfo_,
	nullptr,
	nullptr,
	_ServiceDialog$PrintRangePanel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.print.ServiceDialog"
};

$Object* allocate$ServiceDialog$PrintRangePanel($Class* clazz) {
	return $of($alloc(ServiceDialog$PrintRangePanel));
}

$String* ServiceDialog$PrintRangePanel::toString() {
	 return this->$JPanel::toString();
}

int32_t ServiceDialog$PrintRangePanel::hashCode() {
	 return this->$JPanel::hashCode();
}

bool ServiceDialog$PrintRangePanel::equals(Object$* arg0) {
	 return this->$JPanel::equals(arg0);
}

$Object* ServiceDialog$PrintRangePanel::clone() {
	 return this->$JPanel::clone();
}

void ServiceDialog$PrintRangePanel::finalize() {
	this->$JPanel::finalize();
}

void ServiceDialog$PrintRangePanel::init$($ServiceDialog* this$0) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$JPanel::init$();
	$set(this, strTitle, $ServiceDialog::getMsg("border.printrange"_s));
	$set(this, prAll, $new($PageRanges, 1, $Integer::MAX_VALUE));
	$var($GridBagLayout, gridbag, $new($GridBagLayout));
	$var($GridBagConstraints, c, $new($GridBagConstraints));
	setLayout(gridbag);
	setBorder($($BorderFactory::createTitledBorder(this->strTitle)));
	c->fill = $GridBagConstraints::BOTH;
	$set(c, insets, $ServiceDialog::compInsets);
	c->gridwidth = $GridBagConstraints::REMAINDER;
	$var($ButtonGroup, bg, $new($ButtonGroup));
	$var($JPanel, pnlTop, $new($JPanel, static_cast<$LayoutManager*>($$new($FlowLayout, $FlowLayout::LEADING))));
	$set(this, rbAll, $ServiceDialog::createRadioButton("radiobutton.rangeall"_s, this));
	$nc(this->rbAll)->setSelected(true);
	bg->add(this->rbAll);
	pnlTop->add(static_cast<$Component*>(this->rbAll));
	$ServiceDialog::addToGB(pnlTop, this, gridbag, c);
	$var($JPanel, pnlBottom, $new($JPanel, static_cast<$LayoutManager*>($$new($FlowLayout, $FlowLayout::LEADING))));
	$set(this, rbPages, $ServiceDialog::createRadioButton("radiobutton.rangepages"_s, this));
	bg->add(this->rbPages);
	pnlBottom->add(static_cast<$Component*>(this->rbPages));
	$var($DecimalFormat, format, $new($DecimalFormat, "####0"_s));
	format->setMinimumFractionDigits(0);
	format->setMaximumFractionDigits(0);
	format->setMinimumIntegerDigits(0);
	format->setMaximumIntegerDigits(5);
	format->setParseIntegerOnly(true);
	format->setDecimalSeparatorAlwaysShown(false);
	$var($NumberFormatter, nf, $new($NumberFormatter, format));
	nf->setMinimum($($Integer::valueOf(1)));
	nf->setMaximum($($Integer::valueOf($Integer::MAX_VALUE)));
	nf->setAllowsInvalid(true);
	nf->setCommitsOnValidEdit(true);
	$set(this, tfRangeFrom, $new($JFormattedTextField, static_cast<$JFormattedTextField$AbstractFormatter*>(nf)));
	$nc(this->tfRangeFrom)->setColumns(4);
	$nc(this->tfRangeFrom)->setEnabled(false);
	$nc(this->tfRangeFrom)->addActionListener(this);
	$nc(this->tfRangeFrom)->addFocusListener(this);
	$nc(this->tfRangeFrom)->setFocusLostBehavior($JFormattedTextField::PERSIST);
	$nc($($nc(this->tfRangeFrom)->getAccessibleContext()))->setAccessibleName($($ServiceDialog::getMsg("radiobutton.rangepages"_s)));
	pnlBottom->add(static_cast<$Component*>(this->tfRangeFrom));
	$set(this, lblRangeTo, $new($JLabel, $($ServiceDialog::getMsg("label.rangeto"_s))));
	$nc(this->lblRangeTo)->setEnabled(false);
	pnlBottom->add(static_cast<$Component*>(this->lblRangeTo));
	$var($NumberFormatter, nfto, nullptr);
	try {
		$assign(nfto, $cast($NumberFormatter, nf->clone()));
	} catch ($CloneNotSupportedException&) {
		$var($CloneNotSupportedException, e, $catch());
		$assign(nfto, $new($NumberFormatter));
	}
	$set(this, tfRangeTo, $new($JFormattedTextField, static_cast<$JFormattedTextField$AbstractFormatter*>(nfto)));
	$nc(this->tfRangeTo)->setColumns(4);
	$nc(this->tfRangeTo)->setEnabled(false);
	$nc(this->tfRangeTo)->addFocusListener(this);
	$nc($($nc(this->tfRangeTo)->getAccessibleContext()))->setAccessibleName($($ServiceDialog::getMsg("label.rangeto"_s)));
	pnlBottom->add(static_cast<$Component*>(this->tfRangeTo));
	$ServiceDialog::addToGB(pnlBottom, this, gridbag, c);
}

void ServiceDialog$PrintRangePanel::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($Object, source, $nc(e)->getSource());
	$init($SunPageSelection);
	$var($SunPageSelection, select, $SunPageSelection::ALL);
	setupRangeWidgets();
	if ($equals(source, this->rbAll)) {
		$nc(this->this$0->asCurrent)->add(static_cast<$Attribute*>(static_cast<$DocAttribute*>(this->prAll)));
	} else if ($equals(source, this->rbSelect)) {
		$assign(select, $SunPageSelection::SELECTION);
	} else if ($equals(source, this->rbPages) || $equals(source, this->tfRangeFrom) || $equals(source, this->tfRangeTo)) {
		updateRangeAttribute();
		$assign(select, $SunPageSelection::RANGE);
	}
	if (this->this$0->isAWT) {
		$nc(this->this$0->asCurrent)->add(select);
	}
}

void ServiceDialog$PrintRangePanel::focusLost($FocusEvent* e) {
	$var($Object, source, $nc(e)->getSource());
	if (($equals(source, this->tfRangeFrom)) || ($equals(source, this->tfRangeTo))) {
		updateRangeAttribute();
	}
}

void ServiceDialog$PrintRangePanel::focusGained($FocusEvent* e) {
}

void ServiceDialog$PrintRangePanel::setupRangeWidgets() {
	bool rangeEnabled = ($nc(this->rbPages)->isSelected() && this->prPgRngSupported);
	$nc(this->tfRangeFrom)->setEnabled(rangeEnabled);
	$nc(this->tfRangeTo)->setEnabled(rangeEnabled);
	$nc(this->lblRangeTo)->setEnabled(rangeEnabled);
}

void ServiceDialog$PrintRangePanel::updateRangeAttribute() {
	$useLocalCurrentObjectStackCache();
	$var($String, strFrom, $nc(this->tfRangeFrom)->getText());
	$var($String, strTo, $nc(this->tfRangeTo)->getText());
	int32_t min = 0;
	int32_t max = 0;
	try {
		min = $Integer::parseInt(strFrom);
	} catch ($NumberFormatException&) {
		$var($NumberFormatException, e, $catch());
		min = 1;
	}
	try {
		max = $Integer::parseInt(strTo);
	} catch ($NumberFormatException&) {
		$var($NumberFormatException, e, $catch());
		max = min;
	}
	if (min < 1) {
		min = 1;
		$nc(this->tfRangeFrom)->setValue($($Integer::valueOf(1)));
	}
	if (max < min) {
		max = min;
		$nc(this->tfRangeTo)->setValue($($Integer::valueOf(min)));
	}
	$var($PageRanges, pr, $new($PageRanges, min, max));
	$nc(this->this$0->asCurrent)->add(static_cast<$Attribute*>(static_cast<$DocAttribute*>(pr)));
}

void ServiceDialog$PrintRangePanel::updateInfo() {
	$useLocalCurrentObjectStackCache();
	$load($PageRanges);
	$Class* prCategory = $PageRanges::class$;
	this->prSupported = false;
	if ($nc(this->this$0->psCurrent)->isAttributeCategorySupported(prCategory) || this->this$0->isAWT) {
		this->prSupported = true;
		this->prPgRngSupported = $nc(this->this$0->psCurrent)->isAttributeValueSupported(static_cast<$Attribute*>(static_cast<$DocAttribute*>(this->prAll)), this->this$0->docFlavor, static_cast<$AttributeSet*>(static_cast<$HashAttributeSet*>(this->this$0->asCurrent)));
	}
	$init($SunPageSelection);
	$var($SunPageSelection, select, $SunPageSelection::ALL);
	int32_t min = 1;
	int32_t max = 1;
	$var($PageRanges, pr, $cast($PageRanges, $nc(this->this$0->asCurrent)->get(prCategory)));
	if (pr != nullptr) {
		if (!pr->equals(this->prAll)) {
			$assign(select, $SunPageSelection::RANGE);
			$var($intArray2, members, pr->getMembers());
			if (($nc(members)->length > 0) && ($nc(members->get(0))->length > 1)) {
				min = $nc(members->get(0))->get(0);
				max = $nc(members->get(0))->get(1);
			}
		}
	}
	if (this->this$0->isAWT) {
		$assign(select, $cast($SunPageSelection, $nc(this->this$0->asCurrent)->get($SunPageSelection::class$)));
	}
	if (select == $SunPageSelection::ALL) {
		$nc(this->rbAll)->setSelected(true);
	} else {
		if (select == $SunPageSelection::SELECTION) {
		} else {
			$nc(this->rbPages)->setSelected(true);
		}
	}
	$nc(this->tfRangeFrom)->setValue($($Integer::valueOf(min)));
	$nc(this->tfRangeTo)->setValue($($Integer::valueOf(max)));
	$nc(this->rbAll)->setEnabled(this->prSupported);
	$nc(this->rbPages)->setEnabled(this->prPgRngSupported);
	setupRangeWidgets();
}

ServiceDialog$PrintRangePanel::ServiceDialog$PrintRangePanel() {
}

$Class* ServiceDialog$PrintRangePanel::load$($String* name, bool initialize) {
	$loadClass(ServiceDialog$PrintRangePanel, name, initialize, &_ServiceDialog$PrintRangePanel_ClassInfo_, allocate$ServiceDialog$PrintRangePanel);
	return class$;
}

$Class* ServiceDialog$PrintRangePanel::class$ = nullptr;

	} // print
} // sun