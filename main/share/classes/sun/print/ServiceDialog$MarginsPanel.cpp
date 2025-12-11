#include <sun/print/ServiceDialog$MarginsPanel.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/GridBagConstraints.h>
#include <java/awt/GridBagLayout.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/FocusListener.h>
#include <java/lang/Comparable.h>
#include <java/text/DecimalFormat.h>
#include <java/text/NumberFormat.h>
#include <java/util/EventObject.h>
#include <java/util/Locale.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/print/DocFlavor.h>
#include <javax/print/PrintService.h>
#include <javax/print/attribute/Attribute.h>
#include <javax/print/attribute/AttributeSet.h>
#include <javax/print/attribute/DocAttribute.h>
#include <javax/print/attribute/HashPrintRequestAttributeSet.h>
#include <javax/print/attribute/PrintRequestAttributeSet.h>
#include <javax/print/attribute/Size2DSyntax.h>
#include <javax/print/attribute/standard/Media.h>
#include <javax/print/attribute/standard/MediaPrintableArea.h>
#include <javax/print/attribute/standard/MediaSize.h>
#include <javax/print/attribute/standard/MediaSizeName.h>
#include <javax/print/attribute/standard/OrientationRequested.h>
#include <javax/swing/BorderFactory.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFormattedTextField$AbstractFormatter.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/TitledBorder.h>
#include <javax/swing/text/DefaultFormatter.h>
#include <javax/swing/text/InternationalFormatter.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/NumberFormatter.h>
#include <sun/print/ServiceDialog.h>
#include <jcpp.h>

#undef CANADA
#undef HORIZONTAL
#undef INCH
#undef LANDSCAPE
#undef LEADING
#undef MM
#undef RELATIVE
#undef REMAINDER
#undef REVERSE_LANDSCAPE
#undef REVERSE_PORTRAIT
#undef US

using $MediaPrintableAreaArray = $Array<::javax::print::attribute::standard::MediaPrintableArea>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $GridBagConstraints = ::java::awt::GridBagConstraints;
using $GridBagLayout = ::java::awt::GridBagLayout;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $FocusListener = ::java::awt::event::FocusListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DecimalFormat = ::java::text::DecimalFormat;
using $NumberFormat = ::java::text::NumberFormat;
using $Locale = ::java::util::Locale;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $PrintService = ::javax::print::PrintService;
using $Attribute = ::javax::print::attribute::Attribute;
using $AttributeSet = ::javax::print::attribute::AttributeSet;
using $DocAttribute = ::javax::print::attribute::DocAttribute;
using $HashPrintRequestAttributeSet = ::javax::print::attribute::HashPrintRequestAttributeSet;
using $PrintRequestAttributeSet = ::javax::print::attribute::PrintRequestAttributeSet;
using $Size2DSyntax = ::javax::print::attribute::Size2DSyntax;
using $Media = ::javax::print::attribute::standard::Media;
using $MediaPrintableArea = ::javax::print::attribute::standard::MediaPrintableArea;
using $MediaSize = ::javax::print::attribute::standard::MediaSize;
using $MediaSizeName = ::javax::print::attribute::standard::MediaSizeName;
using $OrientationRequested = ::javax::print::attribute::standard::OrientationRequested;
using $BorderFactory = ::javax::swing::BorderFactory;
using $JComponent = ::javax::swing::JComponent;
using $JFormattedTextField = ::javax::swing::JFormattedTextField;
using $JFormattedTextField$AbstractFormatter = ::javax::swing::JFormattedTextField$AbstractFormatter;
using $JLabel = ::javax::swing::JLabel;
using $JPanel = ::javax::swing::JPanel;
using $JTextField = ::javax::swing::JTextField;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $DefaultFormatter = ::javax::swing::text::DefaultFormatter;
using $InternationalFormatter = ::javax::swing::text::InternationalFormatter;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $NumberFormatter = ::javax::swing::text::NumberFormatter;
using $ServiceDialog = ::sun::print::ServiceDialog;

namespace sun {
	namespace print {

$FieldInfo _ServiceDialog$MarginsPanel_FieldInfo_[] = {
	{"this$0", "Lsun/print/ServiceDialog;", nullptr, $FINAL | $SYNTHETIC, $field(ServiceDialog$MarginsPanel, this$0)},
	{"strTitle", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ServiceDialog$MarginsPanel, strTitle)},
	{"leftMargin", "Ljavax/swing/JFormattedTextField;", nullptr, $PRIVATE, $field(ServiceDialog$MarginsPanel, leftMargin)},
	{"rightMargin", "Ljavax/swing/JFormattedTextField;", nullptr, $PRIVATE, $field(ServiceDialog$MarginsPanel, rightMargin)},
	{"topMargin", "Ljavax/swing/JFormattedTextField;", nullptr, $PRIVATE, $field(ServiceDialog$MarginsPanel, topMargin)},
	{"bottomMargin", "Ljavax/swing/JFormattedTextField;", nullptr, $PRIVATE, $field(ServiceDialog$MarginsPanel, bottomMargin)},
	{"lblLeft", "Ljavax/swing/JLabel;", nullptr, $PRIVATE, $field(ServiceDialog$MarginsPanel, lblLeft)},
	{"lblRight", "Ljavax/swing/JLabel;", nullptr, $PRIVATE, $field(ServiceDialog$MarginsPanel, lblRight)},
	{"lblTop", "Ljavax/swing/JLabel;", nullptr, $PRIVATE, $field(ServiceDialog$MarginsPanel, lblTop)},
	{"lblBottom", "Ljavax/swing/JLabel;", nullptr, $PRIVATE, $field(ServiceDialog$MarginsPanel, lblBottom)},
	{"units", "I", nullptr, $PRIVATE, $field(ServiceDialog$MarginsPanel, units)},
	{"lmVal", "F", nullptr, $PRIVATE, $field(ServiceDialog$MarginsPanel, lmVal)},
	{"rmVal", "F", nullptr, $PRIVATE, $field(ServiceDialog$MarginsPanel, rmVal)},
	{"tmVal", "F", nullptr, $PRIVATE, $field(ServiceDialog$MarginsPanel, tmVal)},
	{"bmVal", "F", nullptr, $PRIVATE, $field(ServiceDialog$MarginsPanel, bmVal)},
	{"lmObj", "Ljava/lang/Float;", nullptr, $PRIVATE, $field(ServiceDialog$MarginsPanel, lmObj)},
	{"rmObj", "Ljava/lang/Float;", nullptr, $PRIVATE, $field(ServiceDialog$MarginsPanel, rmObj)},
	{"tmObj", "Ljava/lang/Float;", nullptr, $PRIVATE, $field(ServiceDialog$MarginsPanel, tmObj)},
	{"bmObj", "Ljava/lang/Float;", nullptr, $PRIVATE, $field(ServiceDialog$MarginsPanel, bmObj)},
	{}
};

$MethodInfo _ServiceDialog$MarginsPanel_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/print/ServiceDialog;)V", nullptr, $PUBLIC, $method(static_cast<void(ServiceDialog$MarginsPanel::*)($ServiceDialog*)>(&ServiceDialog$MarginsPanel::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateInfo", "()V", nullptr, $PUBLIC},
	{"updateMargins", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"validateMargins", "(FFFF)Ljavax/print/attribute/standard/MediaPrintableArea;", nullptr, $PRIVATE, $method(static_cast<$MediaPrintableArea*(ServiceDialog$MarginsPanel::*)(float,float,float,float)>(&ServiceDialog$MarginsPanel::validateMargins))},
	{}
};

$InnerClassInfo _ServiceDialog$MarginsPanel_InnerClassesInfo_[] = {
	{"sun.print.ServiceDialog$MarginsPanel", "sun.print.ServiceDialog", "MarginsPanel", $PRIVATE},
	{}
};

$ClassInfo _ServiceDialog$MarginsPanel_ClassInfo_ = {
	$ACC_SUPER,
	"sun.print.ServiceDialog$MarginsPanel",
	"javax.swing.JPanel",
	"java.awt.event.ActionListener,java.awt.event.FocusListener",
	_ServiceDialog$MarginsPanel_FieldInfo_,
	_ServiceDialog$MarginsPanel_MethodInfo_,
	nullptr,
	nullptr,
	_ServiceDialog$MarginsPanel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.print.ServiceDialog"
};

$Object* allocate$ServiceDialog$MarginsPanel($Class* clazz) {
	return $of($alloc(ServiceDialog$MarginsPanel));
}

$String* ServiceDialog$MarginsPanel::toString() {
	 return this->$JPanel::toString();
}

int32_t ServiceDialog$MarginsPanel::hashCode() {
	 return this->$JPanel::hashCode();
}

bool ServiceDialog$MarginsPanel::equals(Object$* arg0) {
	 return this->$JPanel::equals(arg0);
}

$Object* ServiceDialog$MarginsPanel::clone() {
	 return this->$JPanel::clone();
}

void ServiceDialog$MarginsPanel::finalize() {
	this->$JPanel::finalize();
}

void ServiceDialog$MarginsPanel::init$($ServiceDialog* this$0) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$JPanel::init$();
	$set(this, strTitle, $ServiceDialog::getMsg("border.margins"_s));
	this->units = $MediaPrintableArea::MM;
	this->lmVal = -1.0f;
	this->rmVal = -1.0f;
	this->tmVal = -1.0f;
	this->bmVal = -1.0f;
	$var($GridBagLayout, gridbag, $new($GridBagLayout));
	$var($GridBagConstraints, c, $new($GridBagConstraints));
	c->fill = $GridBagConstraints::HORIZONTAL;
	c->weightx = 1.0;
	c->weighty = 0.0;
	$set(c, insets, $ServiceDialog::compInsets);
	setLayout(gridbag);
	setBorder($($BorderFactory::createTitledBorder(this->strTitle)));
	$var($String, unitsKey, "label.millimetres"_s);
	$var($String, defaultCountry, $nc($($Locale::getDefault()))->getCountry());
	bool var$0 = defaultCountry != nullptr;
	if (var$0) {
		bool var$2 = defaultCountry->isEmpty();
		bool var$1 = var$2 || $nc(defaultCountry)->equals($($nc($Locale::US)->getCountry()));
		var$0 = (var$1 || defaultCountry->equals($($nc($Locale::CANADA)->getCountry())));
	}
	if (var$0) {
		$assign(unitsKey, "label.inches"_s);
		this->units = $MediaPrintableArea::INCH;
	}
	$var($String, unitsMsg, $ServiceDialog::getMsg(unitsKey));
	$var($DecimalFormat, format, nullptr);
	if (this->units == $MediaPrintableArea::MM) {
		$assign(format, $new($DecimalFormat, "###.##"_s));
		format->setMaximumIntegerDigits(3);
	} else {
		$assign(format, $new($DecimalFormat, "##.##"_s));
		format->setMaximumIntegerDigits(2);
	}
	$nc(format)->setMinimumFractionDigits(1);
	format->setMaximumFractionDigits(2);
	format->setMinimumIntegerDigits(1);
	format->setParseIntegerOnly(false);
	format->setDecimalSeparatorAlwaysShown(true);
	$var($NumberFormatter, nf, $new($NumberFormatter, format));
	nf->setMinimum($($Float::valueOf(0.0f)));
	nf->setMaximum($($Float::valueOf(999.0f)));
	nf->setAllowsInvalid(true);
	nf->setCommitsOnValidEdit(true);
	$set(this, leftMargin, $new($JFormattedTextField, static_cast<$JFormattedTextField$AbstractFormatter*>(nf)));
	$nc(this->leftMargin)->addFocusListener(this);
	$nc(this->leftMargin)->addActionListener(this);
	$nc($($nc(this->leftMargin)->getAccessibleContext()))->setAccessibleName($($ServiceDialog::getMsg("label.leftmargin"_s)));
	$set(this, rightMargin, $new($JFormattedTextField, static_cast<$JFormattedTextField$AbstractFormatter*>(nf)));
	$nc(this->rightMargin)->addFocusListener(this);
	$nc(this->rightMargin)->addActionListener(this);
	$nc($($nc(this->rightMargin)->getAccessibleContext()))->setAccessibleName($($ServiceDialog::getMsg("label.rightmargin"_s)));
	$set(this, topMargin, $new($JFormattedTextField, static_cast<$JFormattedTextField$AbstractFormatter*>(nf)));
	$nc(this->topMargin)->addFocusListener(this);
	$nc(this->topMargin)->addActionListener(this);
	$nc($($nc(this->topMargin)->getAccessibleContext()))->setAccessibleName($($ServiceDialog::getMsg("label.topmargin"_s)));
	$set(this, bottomMargin, $new($JFormattedTextField, static_cast<$JFormattedTextField$AbstractFormatter*>(nf)));
	$nc(this->bottomMargin)->addFocusListener(this);
	$nc(this->bottomMargin)->addActionListener(this);
	$nc($($nc(this->bottomMargin)->getAccessibleContext()))->setAccessibleName($($ServiceDialog::getMsg("label.bottommargin"_s)));
	c->gridwidth = $GridBagConstraints::RELATIVE;
	$set(this, lblLeft, $new($JLabel, $$str({$($ServiceDialog::getMsg("label.leftmargin"_s)), " "_s, unitsMsg}), $JLabel::LEADING));
	$nc(this->lblLeft)->setDisplayedMnemonic($ServiceDialog::getMnemonic("label.leftmargin"_s));
	$nc(this->lblLeft)->setLabelFor(this->leftMargin);
	$ServiceDialog::addToGB(this->lblLeft, this, gridbag, c);
	c->gridwidth = $GridBagConstraints::REMAINDER;
	$set(this, lblRight, $new($JLabel, $$str({$($ServiceDialog::getMsg("label.rightmargin"_s)), " "_s, unitsMsg}), $JLabel::LEADING));
	$nc(this->lblRight)->setDisplayedMnemonic($ServiceDialog::getMnemonic("label.rightmargin"_s));
	$nc(this->lblRight)->setLabelFor(this->rightMargin);
	$ServiceDialog::addToGB(this->lblRight, this, gridbag, c);
	c->gridwidth = $GridBagConstraints::RELATIVE;
	$ServiceDialog::addToGB(this->leftMargin, this, gridbag, c);
	c->gridwidth = $GridBagConstraints::REMAINDER;
	$ServiceDialog::addToGB(this->rightMargin, this, gridbag, c);
	$ServiceDialog::addToGB($$new($JPanel), this, gridbag, c);
	c->gridwidth = $GridBagConstraints::RELATIVE;
	$set(this, lblTop, $new($JLabel, $$str({$($ServiceDialog::getMsg("label.topmargin"_s)), " "_s, unitsMsg}), $JLabel::LEADING));
	$nc(this->lblTop)->setDisplayedMnemonic($ServiceDialog::getMnemonic("label.topmargin"_s));
	$nc(this->lblTop)->setLabelFor(this->topMargin);
	$ServiceDialog::addToGB(this->lblTop, this, gridbag, c);
	c->gridwidth = $GridBagConstraints::REMAINDER;
	$set(this, lblBottom, $new($JLabel, $$str({$($ServiceDialog::getMsg("label.bottommargin"_s)), " "_s, unitsMsg}), $JLabel::LEADING));
	$nc(this->lblBottom)->setDisplayedMnemonic($ServiceDialog::getMnemonic("label.bottommargin"_s));
	$nc(this->lblBottom)->setLabelFor(this->bottomMargin);
	$ServiceDialog::addToGB(this->lblBottom, this, gridbag, c);
	c->gridwidth = $GridBagConstraints::RELATIVE;
	$ServiceDialog::addToGB(this->topMargin, this, gridbag, c);
	c->gridwidth = $GridBagConstraints::REMAINDER;
	$ServiceDialog::addToGB(this->bottomMargin, this, gridbag, c);
}

void ServiceDialog$MarginsPanel::actionPerformed($ActionEvent* e) {
	$var($Object, source, $nc(e)->getSource());
	updateMargins(source);
}

void ServiceDialog$MarginsPanel::focusLost($FocusEvent* e) {
	$var($Object, source, $nc(e)->getSource());
	updateMargins(source);
}

void ServiceDialog$MarginsPanel::focusGained($FocusEvent* e) {
}

void ServiceDialog$MarginsPanel::updateMargins(Object$* source) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($JFormattedTextField, source))) {
		return;
	} else {
		$var($JFormattedTextField, tf, $cast($JFormattedTextField, source));
		$var($Float, val, $cast($Float, $nc(tf)->getValue()));
		if (val == nullptr) {
			return;
		}
		if (tf == this->leftMargin && $nc(val)->equals(this->lmObj)) {
			return;
		}
		if (tf == this->rightMargin && $nc(val)->equals(this->rmObj)) {
			return;
		}
		if (tf == this->topMargin && $nc(val)->equals(this->tmObj)) {
			return;
		}
		if (tf == this->bottomMargin && $nc(val)->equals(this->bmObj)) {
			return;
		}
	}
	$var($Float, lmTmpObj, $cast($Float, $nc(this->leftMargin)->getValue()));
	$var($Float, rmTmpObj, $cast($Float, $nc(this->rightMargin)->getValue()));
	$var($Float, tmTmpObj, $cast($Float, $nc(this->topMargin)->getValue()));
	$var($Float, bmTmpObj, $cast($Float, $nc(this->bottomMargin)->getValue()));
	float lm = $nc(lmTmpObj)->floatValue();
	float rm = $nc(rmTmpObj)->floatValue();
	float tm = $nc(tmTmpObj)->floatValue();
	float bm = $nc(bmTmpObj)->floatValue();
	$load($OrientationRequested);
	$Class* orCategory = $OrientationRequested::class$;
	$var($OrientationRequested, or$, $cast($OrientationRequested, $nc(this->this$0->asCurrent)->get(orCategory)));
	if (or$ == nullptr) {
		$assign(or$, $cast($OrientationRequested, $nc(this->this$0->psCurrent)->getDefaultAttributeValue(orCategory)));
	}
	float tmp = 0.0;
	$init($OrientationRequested);
	if (or$ == $OrientationRequested::REVERSE_PORTRAIT) {
		tmp = lm;
		lm = rm;
		rm = tmp;
		tmp = tm;
		tm = bm;
		bm = tmp;
	} else {
		if (or$ == $OrientationRequested::LANDSCAPE) {
			tmp = lm;
			lm = tm;
			tm = rm;
			rm = bm;
			bm = tmp;
		} else {
			if (or$ == $OrientationRequested::REVERSE_LANDSCAPE) {
				tmp = lm;
				lm = bm;
				bm = rm;
				rm = tm;
				tm = tmp;
			}
		}
	}
	$var($MediaPrintableArea, mpa, nullptr);
	if (($assign(mpa, validateMargins(lm, rm, tm, bm))) != nullptr) {
		$nc(this->this$0->asCurrent)->add(static_cast<$Attribute*>(static_cast<$DocAttribute*>(mpa)));
		this->lmVal = lm;
		this->rmVal = rm;
		this->tmVal = tm;
		this->bmVal = bm;
		$set(this, lmObj, lmTmpObj);
		$set(this, rmObj, rmTmpObj);
		$set(this, tmObj, tmTmpObj);
		$set(this, bmObj, bmTmpObj);
	} else if (this->lmObj == nullptr || this->rmObj == nullptr || this->tmObj == nullptr || this->bmObj == nullptr) {
		return;
	} else {
		$nc(this->leftMargin)->setValue(this->lmObj);
		$nc(this->rightMargin)->setValue(this->rmObj);
		$nc(this->topMargin)->setValue(this->tmObj);
		$nc(this->bottomMargin)->setValue(this->bmObj);
	}
}

$MediaPrintableArea* ServiceDialog$MarginsPanel::validateMargins(float lm, float rm, float tm, float bm) {
	$useLocalCurrentObjectStackCache();
	$load($MediaPrintableArea);
	$Class* mpaCategory = $MediaPrintableArea::class$;
	$var($MediaPrintableArea, mpa, nullptr);
	$var($MediaPrintableArea, mpaMax, nullptr);
	$var($MediaSize, mediaSize, nullptr);
	$load($Media);
	$var($Media, media, $cast($Media, $nc(this->this$0->asCurrent)->get($Media::class$)));
	if (media == nullptr || !($instanceOf($MediaSizeName, media))) {
		$assign(media, $cast($Media, $nc(this->this$0->psCurrent)->getDefaultAttributeValue($Media::class$)));
	}
	if (media != nullptr && ($instanceOf($MediaSizeName, media))) {
		$var($MediaSizeName, msn, $cast($MediaSizeName, media));
		$assign(mediaSize, $MediaSize::getMediaSizeForName(msn));
	}
	if (mediaSize == nullptr) {
		$assign(mediaSize, $new($MediaSize, 8.5f, 11.0f, $Size2DSyntax::INCH));
	}
	if (media != nullptr) {
		$var($PrintRequestAttributeSet, tmpASet, $new($HashPrintRequestAttributeSet, static_cast<$PrintRequestAttributeSet*>(this->this$0->asCurrent)));
		tmpASet->add(static_cast<$Attribute*>(static_cast<$DocAttribute*>(media)));
		$var($Object, values, $nc(this->this$0->psCurrent)->getSupportedAttributeValues(mpaCategory, this->this$0->docFlavor, tmpASet));
		if ($instanceOf($MediaPrintableAreaArray, values) && $nc(($cast($MediaPrintableAreaArray, values)))->length > 0) {
			$assign(mpaMax, $nc(($cast($MediaPrintableAreaArray, values)))->get(0));
		}
	}
	if (mpaMax == nullptr) {
		float var$0 = $nc(mediaSize)->getX(this->units);
		$assign(mpaMax, $new($MediaPrintableArea, 0.0f, 0.0f, var$0, mediaSize->getY(this->units), this->units));
	}
	float wid = $nc(mediaSize)->getX(this->units);
	float hgt = mediaSize->getY(this->units);
	float pax = lm;
	float pay = tm;
	float par = rm;
	float pab = bm;
	float paw = wid - lm - rm;
	float pah = hgt - tm - bm;
	bool var$3 = paw <= 0.0f || pah <= 0.0f || pax < 0.0f || pay < 0.0f || par <= 0.0f || pab <= 0.0f || pax < $nc(mpaMax)->getX(this->units);
	bool var$2 = var$3 || paw > $nc(mpaMax)->getWidth(this->units);
	bool var$1 = var$2 || pay < $nc(mpaMax)->getY(this->units);
	if (var$1 || pah > $nc(mpaMax)->getHeight(this->units)) {
		return nullptr;
	} else {
		return $new($MediaPrintableArea, lm, tm, paw, pah, this->units);
	}
}

void ServiceDialog$MarginsPanel::updateInfo() {
	$useLocalCurrentObjectStackCache();
	if (this->this$0->isAWT) {
		$nc(this->leftMargin)->setEnabled(false);
		$nc(this->rightMargin)->setEnabled(false);
		$nc(this->topMargin)->setEnabled(false);
		$nc(this->bottomMargin)->setEnabled(false);
		$nc(this->lblLeft)->setEnabled(false);
		$nc(this->lblRight)->setEnabled(false);
		$nc(this->lblTop)->setEnabled(false);
		$nc(this->lblBottom)->setEnabled(false);
		return;
	}
	$load($MediaPrintableArea);
	$Class* mpaCategory = $MediaPrintableArea::class$;
	$var($MediaPrintableArea, mpa, $cast($MediaPrintableArea, $nc(this->this$0->asCurrent)->get(mpaCategory)));
	$var($MediaPrintableArea, mpaMax, nullptr);
	$var($MediaSize, mediaSize, nullptr);
	$load($Media);
	$var($Media, media, $cast($Media, $nc(this->this$0->asCurrent)->get($Media::class$)));
	if (media == nullptr || !($instanceOf($MediaSizeName, media))) {
		$assign(media, $cast($Media, $nc(this->this$0->psCurrent)->getDefaultAttributeValue($Media::class$)));
	}
	if (media != nullptr && ($instanceOf($MediaSizeName, media))) {
		$var($MediaSizeName, msn, $cast($MediaSizeName, media));
		$assign(mediaSize, $MediaSize::getMediaSizeForName(msn));
	}
	if (mediaSize == nullptr) {
		$assign(mediaSize, $new($MediaSize, 8.5f, 11.0f, $Size2DSyntax::INCH));
	}
	if (media != nullptr) {
		$var($PrintRequestAttributeSet, tmpASet, $new($HashPrintRequestAttributeSet, static_cast<$PrintRequestAttributeSet*>(this->this$0->asCurrent)));
		tmpASet->add(static_cast<$Attribute*>(static_cast<$DocAttribute*>(media)));
		$var($Object, values, $nc(this->this$0->psCurrent)->getSupportedAttributeValues(mpaCategory, this->this$0->docFlavor, tmpASet));
		if ($instanceOf($MediaPrintableAreaArray, values) && $nc(($cast($MediaPrintableAreaArray, values)))->length > 0) {
			$assign(mpaMax, $nc(($cast($MediaPrintableAreaArray, values)))->get(0));
		} else if ($instanceOf($MediaPrintableArea, values)) {
			$assign(mpaMax, $cast($MediaPrintableArea, values));
		}
	}
	if (mpaMax == nullptr) {
		float var$0 = $nc(mediaSize)->getX(this->units);
		$assign(mpaMax, $new($MediaPrintableArea, 0.0f, 0.0f, var$0, mediaSize->getY(this->units), this->units));
	}
	float wid = $nc(mediaSize)->getX($MediaPrintableArea::INCH);
	float hgt = mediaSize->getY($MediaPrintableArea::INCH);
	float maxMarginRatio = 5.0f;
	float xMgn = 0.0;
	float yMgn = 0.0;
	if (wid > maxMarginRatio) {
		xMgn = 1.0f;
	} else {
		xMgn = wid / maxMarginRatio;
	}
	if (hgt > maxMarginRatio) {
		yMgn = 1.0f;
	} else {
		yMgn = hgt / maxMarginRatio;
	}
	if (mpa == nullptr) {
		$assign(mpa, $new($MediaPrintableArea, xMgn, yMgn, wid - (2 * xMgn), hgt - (2 * yMgn), $MediaPrintableArea::INCH));
		$nc(this->this$0->asCurrent)->add(static_cast<$Attribute*>(static_cast<$DocAttribute*>(mpa)));
	}
	float pax = $nc(mpa)->getX(this->units);
	float pay = mpa->getY(this->units);
	float paw = mpa->getWidth(this->units);
	float pah = mpa->getHeight(this->units);
	float paxMax = $nc(mpaMax)->getX(this->units);
	float payMax = mpaMax->getY(this->units);
	float pawMax = mpaMax->getWidth(this->units);
	float pahMax = mpaMax->getHeight(this->units);
	bool invalid = false;
	wid = mediaSize->getX(this->units);
	hgt = mediaSize->getY(this->units);
	if (this->lmVal >= 0.0f) {
		invalid = true;
		if (this->lmVal + this->rmVal > wid) {
			if (paw > pawMax) {
				paw = pawMax;
			}
			pax = (wid - paw) / 2.0f;
		} else {
			pax = (this->lmVal >= paxMax) ? this->lmVal : paxMax;
			paw = wid - pax - this->rmVal;
		}
		if (this->tmVal + this->bmVal > hgt) {
			if (pah > pahMax) {
				pah = pahMax;
			}
			pay = (hgt - pah) / 2.0f;
		} else {
			pay = (this->tmVal >= payMax) ? this->tmVal : payMax;
			pah = hgt - pay - this->bmVal;
		}
	}
	if (pax < paxMax) {
		invalid = true;
		pax = paxMax;
	}
	if (pay < payMax) {
		invalid = true;
		pay = payMax;
	}
	if (paw > pawMax) {
		invalid = true;
		paw = pawMax;
	}
	if (pah > pahMax) {
		invalid = true;
		pah = pahMax;
	}
	if ((pax + paw > paxMax + pawMax) || (paw <= 0.0f)) {
		invalid = true;
		pax = paxMax;
		paw = pawMax;
	}
	if ((pay + pah > payMax + pahMax) || (pah <= 0.0f)) {
		invalid = true;
		pay = payMax;
		pah = pahMax;
	}
	if (invalid) {
		$assign(mpa, $new($MediaPrintableArea, pax, pay, paw, pah, this->units));
		$nc(this->this$0->asCurrent)->add(static_cast<$Attribute*>(static_cast<$DocAttribute*>(mpa)));
	}
	this->lmVal = pax;
	this->tmVal = pay;
	this->rmVal = mediaSize->getX(this->units) - pax - paw;
	this->bmVal = mediaSize->getY(this->units) - pay - pah;
	$set(this, lmObj, $Float::valueOf(this->lmVal));
	$set(this, rmObj, $Float::valueOf(this->rmVal));
	$set(this, tmObj, $Float::valueOf(this->tmVal));
	$set(this, bmObj, $Float::valueOf(this->bmVal));
	$load($OrientationRequested);
	$Class* orCategory = $OrientationRequested::class$;
	$var($OrientationRequested, or$, $cast($OrientationRequested, $nc(this->this$0->asCurrent)->get(orCategory)));
	if (or$ == nullptr) {
		$assign(or$, $cast($OrientationRequested, $nc(this->this$0->psCurrent)->getDefaultAttributeValue(orCategory)));
	}
	$var($Float, tmp, nullptr);
	$init($OrientationRequested);
	if (or$ == $OrientationRequested::REVERSE_PORTRAIT) {
		$assign(tmp, this->lmObj);
		$set(this, lmObj, this->rmObj);
		$set(this, rmObj, tmp);
		$assign(tmp, this->tmObj);
		$set(this, tmObj, this->bmObj);
		$set(this, bmObj, tmp);
	} else {
		if (or$ == $OrientationRequested::LANDSCAPE) {
			$assign(tmp, this->lmObj);
			$set(this, lmObj, this->bmObj);
			$set(this, bmObj, this->rmObj);
			$set(this, rmObj, this->tmObj);
			$set(this, tmObj, tmp);
		} else {
			if (or$ == $OrientationRequested::REVERSE_LANDSCAPE) {
				$assign(tmp, this->lmObj);
				$set(this, lmObj, this->tmObj);
				$set(this, tmObj, this->rmObj);
				$set(this, rmObj, this->bmObj);
				$set(this, bmObj, tmp);
			}
		}
	}
	$nc(this->leftMargin)->setValue(this->lmObj);
	$nc(this->rightMargin)->setValue(this->rmObj);
	$nc(this->topMargin)->setValue(this->tmObj);
	$nc(this->bottomMargin)->setValue(this->bmObj);
}

ServiceDialog$MarginsPanel::ServiceDialog$MarginsPanel() {
}

$Class* ServiceDialog$MarginsPanel::load$($String* name, bool initialize) {
	$loadClass(ServiceDialog$MarginsPanel, name, initialize, &_ServiceDialog$MarginsPanel_ClassInfo_, allocate$ServiceDialog$MarginsPanel);
	return class$;
}

$Class* ServiceDialog$MarginsPanel::class$ = nullptr;

	} // print
} // sun