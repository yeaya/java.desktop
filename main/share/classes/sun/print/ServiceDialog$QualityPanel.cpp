#include <sun/print/ServiceDialog$QualityPanel.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/GridBagConstraints.h>
#include <java/awt/GridBagLayout.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/util/EventObject.h>
#include <javax/print/DocFlavor.h>
#include <javax/print/PrintService.h>
#include <javax/print/attribute/Attribute.h>
#include <javax/print/attribute/AttributeSet.h>
#include <javax/print/attribute/DocAttribute.h>
#include <javax/print/attribute/HashAttributeSet.h>
#include <javax/print/attribute/HashPrintRequestAttributeSet.h>
#include <javax/print/attribute/standard/PrintQuality.h>
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
#undef DRAFT
#undef HIGH
#undef NORMAL
#undef REMAINDER

using $PrintQualityArray = $Array<::javax::print::attribute::standard::PrintQuality>;
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
using $PrintService = ::javax::print::PrintService;
using $Attribute = ::javax::print::attribute::Attribute;
using $AttributeSet = ::javax::print::attribute::AttributeSet;
using $DocAttribute = ::javax::print::attribute::DocAttribute;
using $HashAttributeSet = ::javax::print::attribute::HashAttributeSet;
using $HashPrintRequestAttributeSet = ::javax::print::attribute::HashPrintRequestAttributeSet;
using $PrintQuality = ::javax::print::attribute::standard::PrintQuality;
using $AbstractButton = ::javax::swing::AbstractButton;
using $BorderFactory = ::javax::swing::BorderFactory;
using $ButtonGroup = ::javax::swing::ButtonGroup;
using $JComponent = ::javax::swing::JComponent;
using $JPanel = ::javax::swing::JPanel;
using $JRadioButton = ::javax::swing::JRadioButton;
using $JToggleButton = ::javax::swing::JToggleButton;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $ServiceDialog = ::sun::print::ServiceDialog;

namespace sun {
	namespace print {

$FieldInfo _ServiceDialog$QualityPanel_FieldInfo_[] = {
	{"this$0", "Lsun/print/ServiceDialog;", nullptr, $FINAL | $SYNTHETIC, $field(ServiceDialog$QualityPanel, this$0)},
	{"strTitle", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ServiceDialog$QualityPanel, strTitle)},
	{"rbDraft", "Ljavax/swing/JRadioButton;", nullptr, $PRIVATE, $field(ServiceDialog$QualityPanel, rbDraft)},
	{"rbNormal", "Ljavax/swing/JRadioButton;", nullptr, $PRIVATE, $field(ServiceDialog$QualityPanel, rbNormal)},
	{"rbHigh", "Ljavax/swing/JRadioButton;", nullptr, $PRIVATE, $field(ServiceDialog$QualityPanel, rbHigh)},
	{}
};

$MethodInfo _ServiceDialog$QualityPanel_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/print/ServiceDialog;)V", nullptr, $PUBLIC, $method(static_cast<void(ServiceDialog$QualityPanel::*)($ServiceDialog*)>(&ServiceDialog$QualityPanel::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateInfo", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ServiceDialog$QualityPanel_InnerClassesInfo_[] = {
	{"sun.print.ServiceDialog$QualityPanel", "sun.print.ServiceDialog", "QualityPanel", $PRIVATE},
	{}
};

$ClassInfo _ServiceDialog$QualityPanel_ClassInfo_ = {
	$ACC_SUPER,
	"sun.print.ServiceDialog$QualityPanel",
	"javax.swing.JPanel",
	"java.awt.event.ActionListener",
	_ServiceDialog$QualityPanel_FieldInfo_,
	_ServiceDialog$QualityPanel_MethodInfo_,
	nullptr,
	nullptr,
	_ServiceDialog$QualityPanel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.print.ServiceDialog"
};

$Object* allocate$ServiceDialog$QualityPanel($Class* clazz) {
	return $of($alloc(ServiceDialog$QualityPanel));
}

$String* ServiceDialog$QualityPanel::toString() {
	 return this->$JPanel::toString();
}

int32_t ServiceDialog$QualityPanel::hashCode() {
	 return this->$JPanel::hashCode();
}

bool ServiceDialog$QualityPanel::equals(Object$* arg0) {
	 return this->$JPanel::equals(arg0);
}

$Object* ServiceDialog$QualityPanel::clone() {
	 return this->$JPanel::clone();
}

void ServiceDialog$QualityPanel::finalize() {
	this->$JPanel::finalize();
}

void ServiceDialog$QualityPanel::init$($ServiceDialog* this$0) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$JPanel::init$();
	$set(this, strTitle, $ServiceDialog::getMsg("border.quality"_s));
	$var($GridBagLayout, gridbag, $new($GridBagLayout));
	$var($GridBagConstraints, c, $new($GridBagConstraints));
	setLayout(gridbag);
	setBorder($($BorderFactory::createTitledBorder(this->strTitle)));
	c->fill = $GridBagConstraints::BOTH;
	c->gridwidth = $GridBagConstraints::REMAINDER;
	c->weighty = 1.0;
	$var($ButtonGroup, bg, $new($ButtonGroup));
	$set(this, rbDraft, $ServiceDialog::createRadioButton("radiobutton.draftq"_s, this));
	bg->add(this->rbDraft);
	$ServiceDialog::addToGB(this->rbDraft, this, gridbag, c);
	$set(this, rbNormal, $ServiceDialog::createRadioButton("radiobutton.normalq"_s, this));
	$nc(this->rbNormal)->setSelected(true);
	bg->add(this->rbNormal);
	$ServiceDialog::addToGB(this->rbNormal, this, gridbag, c);
	$set(this, rbHigh, $ServiceDialog::createRadioButton("radiobutton.highq"_s, this));
	bg->add(this->rbHigh);
	$ServiceDialog::addToGB(this->rbHigh, this, gridbag, c);
}

void ServiceDialog$QualityPanel::actionPerformed($ActionEvent* e) {
	$var($Object, source, $nc(e)->getSource());
	if ($equals(source, this->rbDraft)) {
		$init($PrintQuality);
		$nc(this->this$0->asCurrent)->add(static_cast<$Attribute*>(static_cast<$DocAttribute*>($PrintQuality::DRAFT)));
	} else if ($equals(source, this->rbNormal)) {
		$init($PrintQuality);
		$nc(this->this$0->asCurrent)->add(static_cast<$Attribute*>(static_cast<$DocAttribute*>($PrintQuality::NORMAL)));
	} else if ($equals(source, this->rbHigh)) {
		$init($PrintQuality);
		$nc(this->this$0->asCurrent)->add(static_cast<$Attribute*>(static_cast<$DocAttribute*>($PrintQuality::HIGH)));
	}
}

void ServiceDialog$QualityPanel::updateInfo() {
	$useLocalCurrentObjectStackCache();
	$load($PrintQuality);
	$Class* pqCategory = $PrintQuality::class$;
	bool draftSupported = false;
	bool normalSupported = false;
	bool highSupported = false;
	if (this->this$0->isAWT) {
		draftSupported = true;
		normalSupported = true;
		highSupported = true;
	} else if ($nc(this->this$0->psCurrent)->isAttributeCategorySupported(pqCategory)) {
		$var($Object, values, $nc(this->this$0->psCurrent)->getSupportedAttributeValues(pqCategory, this->this$0->docFlavor, static_cast<$AttributeSet*>(static_cast<$HashAttributeSet*>(this->this$0->asCurrent))));
		if ($instanceOf($PrintQualityArray, values)) {
			$var($PrintQualityArray, qvalues, $cast($PrintQualityArray, values));
			for (int32_t i = 0; i < $nc(qvalues)->length; ++i) {
				$var($PrintQuality, value, qvalues->get(i));
				$init($PrintQuality);
				if (value == $PrintQuality::DRAFT) {
					draftSupported = true;
				} else {
					if (value == $PrintQuality::NORMAL) {
						normalSupported = true;
					} else {
						if (value == $PrintQuality::HIGH) {
							highSupported = true;
						}
					}
				}
			}
		}
	}
	$nc(this->rbDraft)->setEnabled(draftSupported);
	$nc(this->rbNormal)->setEnabled(normalSupported);
	$nc(this->rbHigh)->setEnabled(highSupported);
	$var($PrintQuality, pq, $cast($PrintQuality, $nc(this->this$0->asCurrent)->get(pqCategory)));
	if (pq == nullptr) {
		$assign(pq, $cast($PrintQuality, $nc(this->this$0->psCurrent)->getDefaultAttributeValue(pqCategory)));
		if (pq == nullptr) {
			$init($PrintQuality);
			$assign(pq, $PrintQuality::NORMAL);
		}
	}
	$init($PrintQuality);
	if (pq == $PrintQuality::DRAFT) {
		$nc(this->rbDraft)->setSelected(true);
	} else {
		if (pq == $PrintQuality::NORMAL) {
			$nc(this->rbNormal)->setSelected(true);
		} else {
			$nc(this->rbHigh)->setSelected(true);
		}
	}
}

ServiceDialog$QualityPanel::ServiceDialog$QualityPanel() {
}

$Class* ServiceDialog$QualityPanel::load$($String* name, bool initialize) {
	$loadClass(ServiceDialog$QualityPanel, name, initialize, &_ServiceDialog$QualityPanel_ClassInfo_, allocate$ServiceDialog$QualityPanel);
	return class$;
}

$Class* ServiceDialog$QualityPanel::class$ = nullptr;

	} // print
} // sun