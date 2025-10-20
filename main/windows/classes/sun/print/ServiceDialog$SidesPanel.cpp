#include <sun/print/ServiceDialog$SidesPanel.h>

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
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <javax/print/DocFlavor.h>
#include <javax/print/PrintService.h>
#include <javax/print/attribute/Attribute.h>
#include <javax/print/attribute/AttributeSet.h>
#include <javax/print/attribute/DocAttribute.h>
#include <javax/print/attribute/HashAttributeSet.h>
#include <javax/print/attribute/HashPrintRequestAttributeSet.h>
#include <javax/print/attribute/standard/Sides.h>
#include <javax/swing/BorderFactory.h>
#include <javax/swing/ButtonGroup.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/TitledBorder.h>
#include <sun/print/ServiceDialog$IconRadioButton.h>
#include <sun/print/ServiceDialog.h>
#include <jcpp.h>

#undef BOTH
#undef DUPLEX
#undef ONE_SIDED
#undef REMAINDER
#undef TUMBLE

using $SidesArray = $Array<::javax::print::attribute::standard::Sides>;
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
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $DocFlavor = ::javax::print::DocFlavor;
using $PrintService = ::javax::print::PrintService;
using $Attribute = ::javax::print::attribute::Attribute;
using $AttributeSet = ::javax::print::attribute::AttributeSet;
using $DocAttribute = ::javax::print::attribute::DocAttribute;
using $HashAttributeSet = ::javax::print::attribute::HashAttributeSet;
using $HashPrintRequestAttributeSet = ::javax::print::attribute::HashPrintRequestAttributeSet;
using $Sides = ::javax::print::attribute::standard::Sides;
using $BorderFactory = ::javax::swing::BorderFactory;
using $ButtonGroup = ::javax::swing::ButtonGroup;
using $JComponent = ::javax::swing::JComponent;
using $JPanel = ::javax::swing::JPanel;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $TitledBorder = ::javax::swing::border::TitledBorder;
using $ServiceDialog = ::sun::print::ServiceDialog;
using $ServiceDialog$IconRadioButton = ::sun::print::ServiceDialog$IconRadioButton;

namespace sun {
	namespace print {

$FieldInfo _ServiceDialog$SidesPanel_FieldInfo_[] = {
	{"this$0", "Lsun/print/ServiceDialog;", nullptr, $FINAL | $SYNTHETIC, $field(ServiceDialog$SidesPanel, this$0)},
	{"strTitle", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ServiceDialog$SidesPanel, strTitle)},
	{"rbOneSide", "Lsun/print/ServiceDialog$IconRadioButton;", nullptr, $PRIVATE, $field(ServiceDialog$SidesPanel, rbOneSide)},
	{"rbTumble", "Lsun/print/ServiceDialog$IconRadioButton;", nullptr, $PRIVATE, $field(ServiceDialog$SidesPanel, rbTumble)},
	{"rbDuplex", "Lsun/print/ServiceDialog$IconRadioButton;", nullptr, $PRIVATE, $field(ServiceDialog$SidesPanel, rbDuplex)},
	{}
};

$MethodInfo _ServiceDialog$SidesPanel_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/print/ServiceDialog;)V", nullptr, $PUBLIC, $method(static_cast<void(ServiceDialog$SidesPanel::*)($ServiceDialog*)>(&ServiceDialog$SidesPanel::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateInfo", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ServiceDialog$SidesPanel_InnerClassesInfo_[] = {
	{"sun.print.ServiceDialog$SidesPanel", "sun.print.ServiceDialog", "SidesPanel", $PRIVATE},
	{}
};

$ClassInfo _ServiceDialog$SidesPanel_ClassInfo_ = {
	$ACC_SUPER,
	"sun.print.ServiceDialog$SidesPanel",
	"javax.swing.JPanel",
	"java.awt.event.ActionListener",
	_ServiceDialog$SidesPanel_FieldInfo_,
	_ServiceDialog$SidesPanel_MethodInfo_,
	nullptr,
	nullptr,
	_ServiceDialog$SidesPanel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.print.ServiceDialog"
};

$Object* allocate$ServiceDialog$SidesPanel($Class* clazz) {
	return $of($alloc(ServiceDialog$SidesPanel));
}

$String* ServiceDialog$SidesPanel::toString() {
	 return this->$JPanel::toString();
}

int32_t ServiceDialog$SidesPanel::hashCode() {
	 return this->$JPanel::hashCode();
}

bool ServiceDialog$SidesPanel::equals(Object$* arg0) {
	 return this->$JPanel::equals(arg0);
}

$Object* ServiceDialog$SidesPanel::clone() {
	 return this->$JPanel::clone();
}

void ServiceDialog$SidesPanel::finalize() {
	this->$JPanel::finalize();
}

void ServiceDialog$SidesPanel::init$($ServiceDialog* this$0) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$JPanel::init$();
	$set(this, strTitle, $ServiceDialog::getMsg("border.sides"_s));
	$var($GridBagLayout, gridbag, $new($GridBagLayout));
	$var($GridBagConstraints, c, $new($GridBagConstraints));
	setLayout(gridbag);
	setBorder($($BorderFactory::createTitledBorder(this->strTitle)));
	c->fill = $GridBagConstraints::BOTH;
	$set(c, insets, $ServiceDialog::compInsets);
	c->weighty = 1.0;
	c->gridwidth = $GridBagConstraints::REMAINDER;
	$var($ButtonGroup, bg, $new($ButtonGroup));
	$set(this, rbOneSide, $new($ServiceDialog$IconRadioButton, this$0, "radiobutton.oneside"_s, "oneside.png"_s, true, bg, this));
	$nc(this->rbOneSide)->addActionListener(this);
	$ServiceDialog::addToGB(this->rbOneSide, this, gridbag, c);
	$set(this, rbTumble, $new($ServiceDialog$IconRadioButton, this$0, "radiobutton.tumble"_s, "tumble.png"_s, false, bg, this));
	$nc(this->rbTumble)->addActionListener(this);
	$ServiceDialog::addToGB(this->rbTumble, this, gridbag, c);
	$set(this, rbDuplex, $new($ServiceDialog$IconRadioButton, this$0, "radiobutton.duplex"_s, "duplex.png"_s, false, bg, this));
	$nc(this->rbDuplex)->addActionListener(this);
	c->gridwidth = $GridBagConstraints::REMAINDER;
	$ServiceDialog::addToGB(this->rbDuplex, this, gridbag, c);
}

void ServiceDialog$SidesPanel::actionPerformed($ActionEvent* e) {
	$var($Object, source, $nc(e)->getSource());
	if ($nc(this->rbOneSide)->isSameAs(source)) {
		$init($Sides);
		$nc(this->this$0->asCurrent)->add(static_cast<$Attribute*>(static_cast<$DocAttribute*>($Sides::ONE_SIDED)));
	} else if ($nc(this->rbTumble)->isSameAs(source)) {
		$init($Sides);
		$nc(this->this$0->asCurrent)->add(static_cast<$Attribute*>(static_cast<$DocAttribute*>($Sides::TUMBLE)));
	} else if ($nc(this->rbDuplex)->isSameAs(source)) {
		$init($Sides);
		$nc(this->this$0->asCurrent)->add(static_cast<$Attribute*>(static_cast<$DocAttribute*>($Sides::DUPLEX)));
	}
}

void ServiceDialog$SidesPanel::updateInfo() {
	$useLocalCurrentObjectStackCache();
	$load($Sides);
	$Class* sdCategory = $Sides::class$;
	bool osSupported = false;
	bool tSupported = false;
	bool dSupported = false;
	if ($nc(this->this$0->psCurrent)->isAttributeCategorySupported(sdCategory)) {
		$var($Object, values, $nc(this->this$0->psCurrent)->getSupportedAttributeValues(sdCategory, this->this$0->docFlavor, static_cast<$AttributeSet*>(static_cast<$HashAttributeSet*>(this->this$0->asCurrent))));
		if ($instanceOf($SidesArray, values)) {
			$var($SidesArray, svalues, $cast($SidesArray, values));
			for (int32_t i = 0; i < $nc(svalues)->length; ++i) {
				$var($Sides, value, svalues->get(i));
				$init($Sides);
				if (value == $Sides::ONE_SIDED) {
					osSupported = true;
				} else {
					if (value == $Sides::TUMBLE) {
						tSupported = true;
					} else {
						if (value == $Sides::DUPLEX) {
							dSupported = true;
						}
					}
				}
			}
		}
	}
	$nc(this->rbOneSide)->setEnabled(osSupported);
	$nc(this->rbTumble)->setEnabled(tSupported);
	$nc(this->rbDuplex)->setEnabled(dSupported);
	$var($Sides, sd, $cast($Sides, $nc(this->this$0->asCurrent)->get(sdCategory)));
	if (sd == nullptr) {
		$assign(sd, $cast($Sides, $nc(this->this$0->psCurrent)->getDefaultAttributeValue(sdCategory)));
		if (sd == nullptr) {
			$init($Sides);
			$assign(sd, $Sides::ONE_SIDED);
		}
	}
	$init($Sides);
	if (sd == $Sides::ONE_SIDED) {
		$nc(this->rbOneSide)->setSelected(true);
	} else {
		if (sd == $Sides::TUMBLE) {
			$nc(this->rbTumble)->setSelected(true);
		} else {
			$nc(this->rbDuplex)->setSelected(true);
		}
	}
}

ServiceDialog$SidesPanel::ServiceDialog$SidesPanel() {
}

$Class* ServiceDialog$SidesPanel::load$($String* name, bool initialize) {
	$loadClass(ServiceDialog$SidesPanel, name, initialize, &_ServiceDialog$SidesPanel_ClassInfo_, allocate$ServiceDialog$SidesPanel);
	return class$;
}

$Class* ServiceDialog$SidesPanel::class$ = nullptr;

	} // print
} // sun