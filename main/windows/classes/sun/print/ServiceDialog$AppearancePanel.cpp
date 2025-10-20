#include <sun/print/ServiceDialog$AppearancePanel.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/GridBagConstraints.h>
#include <java/awt/GridBagLayout.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPanel.h>
#include <sun/print/ServiceDialog$ChromaticityPanel.h>
#include <sun/print/ServiceDialog$JobAttributesPanel.h>
#include <sun/print/ServiceDialog$QualityPanel.h>
#include <sun/print/ServiceDialog$SidesPanel.h>
#include <sun/print/ServiceDialog.h>
#include <jcpp.h>

#undef BOTH
#undef RELATIVE
#undef REMAINDER

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $GridBagConstraints = ::java::awt::GridBagConstraints;
using $GridBagLayout = ::java::awt::GridBagLayout;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JPanel = ::javax::swing::JPanel;
using $ServiceDialog = ::sun::print::ServiceDialog;
using $ServiceDialog$ChromaticityPanel = ::sun::print::ServiceDialog$ChromaticityPanel;
using $ServiceDialog$JobAttributesPanel = ::sun::print::ServiceDialog$JobAttributesPanel;
using $ServiceDialog$QualityPanel = ::sun::print::ServiceDialog$QualityPanel;
using $ServiceDialog$SidesPanel = ::sun::print::ServiceDialog$SidesPanel;

namespace sun {
	namespace print {

$FieldInfo _ServiceDialog$AppearancePanel_FieldInfo_[] = {
	{"this$0", "Lsun/print/ServiceDialog;", nullptr, $FINAL | $SYNTHETIC, $field(ServiceDialog$AppearancePanel, this$0)},
	{"pnlChromaticity", "Lsun/print/ServiceDialog$ChromaticityPanel;", nullptr, $PRIVATE, $field(ServiceDialog$AppearancePanel, pnlChromaticity)},
	{"pnlQuality", "Lsun/print/ServiceDialog$QualityPanel;", nullptr, $PRIVATE, $field(ServiceDialog$AppearancePanel, pnlQuality)},
	{"pnlJobAttributes", "Lsun/print/ServiceDialog$JobAttributesPanel;", nullptr, $PRIVATE, $field(ServiceDialog$AppearancePanel, pnlJobAttributes)},
	{"pnlSides", "Lsun/print/ServiceDialog$SidesPanel;", nullptr, $PRIVATE, $field(ServiceDialog$AppearancePanel, pnlSides)},
	{}
};

$MethodInfo _ServiceDialog$AppearancePanel_MethodInfo_[] = {
	{"<init>", "(Lsun/print/ServiceDialog;)V", nullptr, $PUBLIC, $method(static_cast<void(ServiceDialog$AppearancePanel::*)($ServiceDialog*)>(&ServiceDialog$AppearancePanel::init$))},
	{"updateInfo", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ServiceDialog$AppearancePanel_InnerClassesInfo_[] = {
	{"sun.print.ServiceDialog$AppearancePanel", "sun.print.ServiceDialog", "AppearancePanel", $PRIVATE},
	{}
};

$ClassInfo _ServiceDialog$AppearancePanel_ClassInfo_ = {
	$ACC_SUPER,
	"sun.print.ServiceDialog$AppearancePanel",
	"javax.swing.JPanel",
	nullptr,
	_ServiceDialog$AppearancePanel_FieldInfo_,
	_ServiceDialog$AppearancePanel_MethodInfo_,
	nullptr,
	nullptr,
	_ServiceDialog$AppearancePanel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.print.ServiceDialog"
};

$Object* allocate$ServiceDialog$AppearancePanel($Class* clazz) {
	return $of($alloc(ServiceDialog$AppearancePanel));
}

void ServiceDialog$AppearancePanel::init$($ServiceDialog* this$0) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$JPanel::init$();
	$var($GridBagLayout, gridbag, $new($GridBagLayout));
	$var($GridBagConstraints, c, $new($GridBagConstraints));
	setLayout(gridbag);
	c->fill = $GridBagConstraints::BOTH;
	$init($ServiceDialog);
	$set(c, insets, $ServiceDialog::panelInsets);
	c->weightx = 1.0;
	c->weighty = 1.0;
	c->gridwidth = $GridBagConstraints::RELATIVE;
	$set(this, pnlChromaticity, $new($ServiceDialog$ChromaticityPanel, this$0));
	$ServiceDialog::addToGB(this->pnlChromaticity, this, gridbag, c);
	c->gridwidth = $GridBagConstraints::REMAINDER;
	$set(this, pnlQuality, $new($ServiceDialog$QualityPanel, this$0));
	$ServiceDialog::addToGB(this->pnlQuality, this, gridbag, c);
	c->gridwidth = 1;
	$set(this, pnlSides, $new($ServiceDialog$SidesPanel, this$0));
	$ServiceDialog::addToGB(this->pnlSides, this, gridbag, c);
	c->gridwidth = $GridBagConstraints::REMAINDER;
	$set(this, pnlJobAttributes, $new($ServiceDialog$JobAttributesPanel, this$0));
	$ServiceDialog::addToGB(this->pnlJobAttributes, this, gridbag, c);
}

void ServiceDialog$AppearancePanel::updateInfo() {
	$nc(this->pnlChromaticity)->updateInfo();
	$nc(this->pnlQuality)->updateInfo();
	$nc(this->pnlSides)->updateInfo();
	$nc(this->pnlJobAttributes)->updateInfo();
}

ServiceDialog$AppearancePanel::ServiceDialog$AppearancePanel() {
}

$Class* ServiceDialog$AppearancePanel::load$($String* name, bool initialize) {
	$loadClass(ServiceDialog$AppearancePanel, name, initialize, &_ServiceDialog$AppearancePanel_ClassInfo_, allocate$ServiceDialog$AppearancePanel);
	return class$;
}

$Class* ServiceDialog$AppearancePanel::class$ = nullptr;

	} // print
} // sun