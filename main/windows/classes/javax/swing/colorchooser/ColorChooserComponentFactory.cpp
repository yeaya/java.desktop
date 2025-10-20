#include <javax/swing/colorchooser/ColorChooserComponentFactory.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/colorchooser/AbstractColorChooserPanel.h>
#include <javax/swing/colorchooser/ColorChooserPanel.h>
#include <javax/swing/colorchooser/ColorModel.h>
#include <javax/swing/colorchooser/ColorModelCMYK.h>
#include <javax/swing/colorchooser/ColorModelHSL.h>
#include <javax/swing/colorchooser/ColorModelHSV.h>
#include <javax/swing/colorchooser/DefaultPreviewPanel.h>
#include <javax/swing/colorchooser/DefaultSwatchChooserPanel.h>
#include <jcpp.h>

using $AbstractColorChooserPanelArray = $Array<::javax::swing::colorchooser::AbstractColorChooserPanel>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JPanel = ::javax::swing::JPanel;
using $AbstractColorChooserPanel = ::javax::swing::colorchooser::AbstractColorChooserPanel;
using $ColorChooserPanel = ::javax::swing::colorchooser::ColorChooserPanel;
using $ColorModel = ::javax::swing::colorchooser::ColorModel;
using $ColorModelCMYK = ::javax::swing::colorchooser::ColorModelCMYK;
using $ColorModelHSL = ::javax::swing::colorchooser::ColorModelHSL;
using $ColorModelHSV = ::javax::swing::colorchooser::ColorModelHSV;
using $DefaultPreviewPanel = ::javax::swing::colorchooser::DefaultPreviewPanel;
using $DefaultSwatchChooserPanel = ::javax::swing::colorchooser::DefaultSwatchChooserPanel;

namespace javax {
	namespace swing {
		namespace colorchooser {

$MethodInfo _ColorChooserComponentFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ColorChooserComponentFactory::*)()>(&ColorChooserComponentFactory::init$))},
	{"getDefaultChooserPanels", "()[Ljavax/swing/colorchooser/AbstractColorChooserPanel;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AbstractColorChooserPanelArray*(*)()>(&ColorChooserComponentFactory::getDefaultChooserPanels))},
	{"getPreviewPanel", "()Ljavax/swing/JComponent;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$JComponent*(*)()>(&ColorChooserComponentFactory::getPreviewPanel))},
	{}
};

$ClassInfo _ColorChooserComponentFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.colorchooser.ColorChooserComponentFactory",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ColorChooserComponentFactory_MethodInfo_
};

$Object* allocate$ColorChooserComponentFactory($Class* clazz) {
	return $of($alloc(ColorChooserComponentFactory));
}

void ColorChooserComponentFactory::init$() {
}

$AbstractColorChooserPanelArray* ColorChooserComponentFactory::getDefaultChooserPanels() {
	$useLocalCurrentObjectStackCache();
	return $new($AbstractColorChooserPanelArray, {
		static_cast<$AbstractColorChooserPanel*>($$new($DefaultSwatchChooserPanel)),
		static_cast<$AbstractColorChooserPanel*>($$new($ColorChooserPanel, $$new($ColorModelHSV))),
		static_cast<$AbstractColorChooserPanel*>($$new($ColorChooserPanel, $$new($ColorModelHSL))),
		static_cast<$AbstractColorChooserPanel*>($$new($ColorChooserPanel, $$new($ColorModel))),
		static_cast<$AbstractColorChooserPanel*>($$new($ColorChooserPanel, $$new($ColorModelCMYK)))
	});
}

$JComponent* ColorChooserComponentFactory::getPreviewPanel() {
	return $new($DefaultPreviewPanel);
}

ColorChooserComponentFactory::ColorChooserComponentFactory() {
}

$Class* ColorChooserComponentFactory::load$($String* name, bool initialize) {
	$loadClass(ColorChooserComponentFactory, name, initialize, &_ColorChooserComponentFactory_ClassInfo_, allocate$ColorChooserComponentFactory);
	return class$;
}

$Class* ColorChooserComponentFactory::class$ = nullptr;

		} // colorchooser
	} // swing
} // javax