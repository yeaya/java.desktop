#include <sun/print/ServiceDialog$ChromaticityPanel.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/GridBagConstraints.h>
#include <java/awt/GridBagLayout.h>
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
#include <javax/print/attribute/standard/Chromaticity.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/BorderFactory.h>
#include <javax/swing/ButtonGroup.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JRadioButton.h>
#include <javax/swing/JToggleButton.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/TitledBorder.h>
#include <sun/print/ServiceDialog.h>
#include <jcpp.h>

#undef BOTH
#undef COLOR
#undef MONOCHROME
#undef REMAINDER

using $ChromaticityArray = $Array<::javax::print::attribute::standard::Chromaticity>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $GridBagConstraints = ::java::awt::GridBagConstraints;
using $GridBagLayout = ::java::awt::GridBagLayout;
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
using $Chromaticity = ::javax::print::attribute::standard::Chromaticity;
using $AbstractButton = ::javax::swing::AbstractButton;
using $BorderFactory = ::javax::swing::BorderFactory;
using $ButtonGroup = ::javax::swing::ButtonGroup;
using $JComponent = ::javax::swing::JComponent;
using $JPanel = ::javax::swing::JPanel;
using $JRadioButton = ::javax::swing::JRadioButton;
using $JToggleButton = ::javax::swing::JToggleButton;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $TitledBorder = ::javax::swing::border::TitledBorder;
using $ServiceDialog = ::sun::print::ServiceDialog;

namespace sun {
	namespace print {

$FieldInfo _ServiceDialog$ChromaticityPanel_FieldInfo_[] = {
	{"this$0", "Lsun/print/ServiceDialog;", nullptr, $FINAL | $SYNTHETIC, $field(ServiceDialog$ChromaticityPanel, this$0)},
	{"strTitle", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ServiceDialog$ChromaticityPanel, strTitle)},
	{"rbMonochrome", "Ljavax/swing/JRadioButton;", nullptr, $PRIVATE, $field(ServiceDialog$ChromaticityPanel, rbMonochrome)},
	{"rbColor", "Ljavax/swing/JRadioButton;", nullptr, $PRIVATE, $field(ServiceDialog$ChromaticityPanel, rbColor)},
	{}
};

$MethodInfo _ServiceDialog$ChromaticityPanel_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/print/ServiceDialog;)V", nullptr, $PUBLIC, $method(static_cast<void(ServiceDialog$ChromaticityPanel::*)($ServiceDialog*)>(&ServiceDialog$ChromaticityPanel::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateInfo", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ServiceDialog$ChromaticityPanel_InnerClassesInfo_[] = {
	{"sun.print.ServiceDialog$ChromaticityPanel", "sun.print.ServiceDialog", "ChromaticityPanel", $PRIVATE},
	{}
};

$ClassInfo _ServiceDialog$ChromaticityPanel_ClassInfo_ = {
	$ACC_SUPER,
	"sun.print.ServiceDialog$ChromaticityPanel",
	"javax.swing.JPanel",
	"java.awt.event.ActionListener",
	_ServiceDialog$ChromaticityPanel_FieldInfo_,
	_ServiceDialog$ChromaticityPanel_MethodInfo_,
	nullptr,
	nullptr,
	_ServiceDialog$ChromaticityPanel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.print.ServiceDialog"
};

$Object* allocate$ServiceDialog$ChromaticityPanel($Class* clazz) {
	return $of($alloc(ServiceDialog$ChromaticityPanel));
}

$String* ServiceDialog$ChromaticityPanel::toString() {
	 return this->$JPanel::toString();
}

int32_t ServiceDialog$ChromaticityPanel::hashCode() {
	 return this->$JPanel::hashCode();
}

bool ServiceDialog$ChromaticityPanel::equals(Object$* arg0) {
	 return this->$JPanel::equals(arg0);
}

$Object* ServiceDialog$ChromaticityPanel::clone() {
	 return this->$JPanel::clone();
}

void ServiceDialog$ChromaticityPanel::finalize() {
	this->$JPanel::finalize();
}

void ServiceDialog$ChromaticityPanel::init$($ServiceDialog* this$0) {
	$set(this, this$0, this$0);
	$JPanel::init$();
	$set(this, strTitle, $ServiceDialog::getMsg("border.chromaticity"_s));
	$var($GridBagLayout, gridbag, $new($GridBagLayout));
	$var($GridBagConstraints, c, $new($GridBagConstraints));
	setLayout(gridbag);
	setBorder($($BorderFactory::createTitledBorder(this->strTitle)));
	c->fill = $GridBagConstraints::BOTH;
	c->gridwidth = $GridBagConstraints::REMAINDER;
	c->weighty = 1.0;
	$var($ButtonGroup, bg, $new($ButtonGroup));
	$set(this, rbMonochrome, $ServiceDialog::createRadioButton("radiobutton.monochrome"_s, this));
	$nc(this->rbMonochrome)->setSelected(true);
	bg->add(this->rbMonochrome);
	$ServiceDialog::addToGB(this->rbMonochrome, this, gridbag, c);
	$set(this, rbColor, $ServiceDialog::createRadioButton("radiobutton.color"_s, this));
	bg->add(this->rbColor);
	$ServiceDialog::addToGB(this->rbColor, this, gridbag, c);
}

void ServiceDialog$ChromaticityPanel::actionPerformed($ActionEvent* e) {
	$var($Object, source, $nc(e)->getSource());
	if ($equals(source, this->rbMonochrome)) {
		$init($Chromaticity);
		$nc(this->this$0->asCurrent)->add(static_cast<$Attribute*>(static_cast<$DocAttribute*>($Chromaticity::MONOCHROME)));
	} else if ($equals(source, this->rbColor)) {
		$init($Chromaticity);
		$nc(this->this$0->asCurrent)->add(static_cast<$Attribute*>(static_cast<$DocAttribute*>($Chromaticity::COLOR)));
	}
}

void ServiceDialog$ChromaticityPanel::updateInfo() {
	$load($Chromaticity);
	$Class* chCategory = $Chromaticity::class$;
	bool monoSupported = false;
	bool colorSupported = false;
	if (this->this$0->isAWT) {
		monoSupported = true;
		colorSupported = true;
	} else if ($nc(this->this$0->psCurrent)->isAttributeCategorySupported(chCategory)) {
		$var($Object, values, $nc(this->this$0->psCurrent)->getSupportedAttributeValues(chCategory, this->this$0->docFlavor, static_cast<$AttributeSet*>(static_cast<$HashAttributeSet*>(this->this$0->asCurrent))));
		if ($instanceOf($ChromaticityArray, values)) {
			$var($ChromaticityArray, cvalues, $cast($ChromaticityArray, values));
			for (int32_t i = 0; i < $nc(cvalues)->length; ++i) {
				$var($Chromaticity, value, cvalues->get(i));
				$init($Chromaticity);
				if (value == $Chromaticity::MONOCHROME) {
					monoSupported = true;
				} else {
					if (value == $Chromaticity::COLOR) {
						colorSupported = true;
					}
				}
			}
		}
	}
	$nc(this->rbMonochrome)->setEnabled(monoSupported);
	$nc(this->rbColor)->setEnabled(colorSupported);
	$var($Chromaticity, ch, $cast($Chromaticity, $nc(this->this$0->asCurrent)->get(chCategory)));
	if (ch == nullptr) {
		$assign(ch, $cast($Chromaticity, $nc(this->this$0->psCurrent)->getDefaultAttributeValue(chCategory)));
		if (ch == nullptr) {
			$init($Chromaticity);
			$assign(ch, $Chromaticity::MONOCHROME);
		}
	}
	$init($Chromaticity);
	if (ch == $Chromaticity::MONOCHROME) {
		$nc(this->rbMonochrome)->setSelected(true);
	} else {
		$nc(this->rbColor)->setSelected(true);
	}
}

ServiceDialog$ChromaticityPanel::ServiceDialog$ChromaticityPanel() {
}

$Class* ServiceDialog$ChromaticityPanel::load$($String* name, bool initialize) {
	$loadClass(ServiceDialog$ChromaticityPanel, name, initialize, &_ServiceDialog$ChromaticityPanel_ClassInfo_, allocate$ServiceDialog$ChromaticityPanel);
	return class$;
}

$Class* ServiceDialog$ChromaticityPanel::class$ = nullptr;

	} // print
} // sun