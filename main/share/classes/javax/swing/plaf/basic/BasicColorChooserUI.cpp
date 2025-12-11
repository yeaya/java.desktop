#include <javax/swing/plaf/basic/BasicColorChooserUI.h>

#include <java/awt/BorderLayout.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/event/MouseListener.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/util/Locale.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/JColorChooser.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/TransferHandler.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/TitledBorder.h>
#include <javax/swing/colorchooser/AbstractColorChooserPanel.h>
#include <javax/swing/colorchooser/ColorChooserComponentFactory.h>
#include <javax/swing/colorchooser/ColorSelectionModel.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/plaf/ColorChooserUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicColorChooserUI$ColorTransferHandler.h>
#include <javax/swing/plaf/basic/BasicColorChooserUI$Handler.h>
#include <javax/swing/plaf/basic/CenterLayout.h>
#include <sun/swing/DefaultLookup.h>
#include <jcpp.h>

#undef SOUTH
#undef TRUE

using $AbstractColorChooserPanelArray = $Array<::javax::swing::colorchooser::AbstractColorChooserPanel>;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $MouseListener = ::java::awt::event::MouseListener;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $JColorChooser = ::javax::swing::JColorChooser;
using $JComponent = ::javax::swing::JComponent;
using $JPanel = ::javax::swing::JPanel;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $TransferHandler = ::javax::swing::TransferHandler;
using $UIManager = ::javax::swing::UIManager;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $TitledBorder = ::javax::swing::border::TitledBorder;
using $AbstractColorChooserPanel = ::javax::swing::colorchooser::AbstractColorChooserPanel;
using $ColorChooserComponentFactory = ::javax::swing::colorchooser::ColorChooserComponentFactory;
using $ColorSelectionModel = ::javax::swing::colorchooser::ColorSelectionModel;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $ColorChooserUI = ::javax::swing::plaf::ColorChooserUI;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicColorChooserUI$ColorTransferHandler = ::javax::swing::plaf::basic::BasicColorChooserUI$ColorTransferHandler;
using $BasicColorChooserUI$Handler = ::javax::swing::plaf::basic::BasicColorChooserUI$Handler;
using $CenterLayout = ::javax::swing::plaf::basic::CenterLayout;
using $DefaultLookup = ::sun::swing::DefaultLookup;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicColorChooserUI_FieldInfo_[] = {
	{"chooser", "Ljavax/swing/JColorChooser;", nullptr, $PROTECTED, $field(BasicColorChooserUI, chooser)},
	{"tabbedPane", "Ljavax/swing/JTabbedPane;", nullptr, 0, $field(BasicColorChooserUI, tabbedPane)},
	{"singlePanel", "Ljavax/swing/JPanel;", nullptr, 0, $field(BasicColorChooserUI, singlePanel)},
	{"previewPanelHolder", "Ljavax/swing/JPanel;", nullptr, 0, $field(BasicColorChooserUI, previewPanelHolder)},
	{"previewPanel", "Ljavax/swing/JComponent;", nullptr, 0, $field(BasicColorChooserUI, previewPanel)},
	{"isMultiPanel", "Z", nullptr, 0, $field(BasicColorChooserUI, isMultiPanel)},
	{"defaultTransferHandler", "Ljavax/swing/TransferHandler;", nullptr, $PRIVATE | $STATIC, $staticField(BasicColorChooserUI, defaultTransferHandler)},
	{"defaultChoosers", "[Ljavax/swing/colorchooser/AbstractColorChooserPanel;", nullptr, $PROTECTED, $field(BasicColorChooserUI, defaultChoosers)},
	{"previewListener", "Ljavax/swing/event/ChangeListener;", nullptr, $PROTECTED, $field(BasicColorChooserUI, previewListener)},
	{"propertyChangeListener", "Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED, $field(BasicColorChooserUI, propertyChangeListener)},
	{"handler", "Ljavax/swing/plaf/basic/BasicColorChooserUI$Handler;", nullptr, $PRIVATE, $field(BasicColorChooserUI, handler)},
	{}
};

$MethodInfo _BasicColorChooserUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicColorChooserUI::*)()>(&BasicColorChooserUI::init$))},
	{"createDefaultChoosers", "()[Ljavax/swing/colorchooser/AbstractColorChooserPanel;", nullptr, $PROTECTED},
	{"createPropertyChangeListener", "()Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&BasicColorChooserUI::createUI))},
	{"getHandler", "()Ljavax/swing/plaf/basic/BasicColorChooserUI$Handler;", nullptr, $PRIVATE, $method(static_cast<$BasicColorChooserUI$Handler*(BasicColorChooserUI::*)()>(&BasicColorChooserUI::getHandler))},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"installPreviewPanel", "()V", nullptr, $PROTECTED},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"selectionChanged", "(Ljavax/swing/colorchooser/ColorSelectionModel;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicColorChooserUI::*)($ColorSelectionModel*)>(&BasicColorChooserUI::selectionChanged))},
	{"uninstallDefaultChoosers", "()V", nullptr, $PROTECTED},
	{"uninstallDefaults", "()V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{"uninstallPreviewPanel", "()V", nullptr, $PROTECTED},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicColorChooserUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicColorChooserUI$ColorTransferHandler", "javax.swing.plaf.basic.BasicColorChooserUI", "ColorTransferHandler", $STATIC},
	{"javax.swing.plaf.basic.BasicColorChooserUI$PropertyHandler", "javax.swing.plaf.basic.BasicColorChooserUI", "PropertyHandler", $PUBLIC},
	{"javax.swing.plaf.basic.BasicColorChooserUI$Handler", "javax.swing.plaf.basic.BasicColorChooserUI", "Handler", $PRIVATE},
	{}
};

$ClassInfo _BasicColorChooserUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicColorChooserUI",
	"javax.swing.plaf.ColorChooserUI",
	nullptr,
	_BasicColorChooserUI_FieldInfo_,
	_BasicColorChooserUI_MethodInfo_,
	nullptr,
	nullptr,
	_BasicColorChooserUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicColorChooserUI$ColorTransferHandler,javax.swing.plaf.basic.BasicColorChooserUI$PropertyHandler,javax.swing.plaf.basic.BasicColorChooserUI$Handler"
};

$Object* allocate$BasicColorChooserUI($Class* clazz) {
	return $of($alloc(BasicColorChooserUI));
}

$TransferHandler* BasicColorChooserUI::defaultTransferHandler = nullptr;

void BasicColorChooserUI::init$() {
	$ColorChooserUI::init$();
	this->isMultiPanel = false;
}

$ComponentUI* BasicColorChooserUI::createUI($JComponent* c) {
	$init(BasicColorChooserUI);
	return $new(BasicColorChooserUI);
}

$AbstractColorChooserPanelArray* BasicColorChooserUI::createDefaultChoosers() {
	$var($AbstractColorChooserPanelArray, panels, $ColorChooserComponentFactory::getDefaultChooserPanels());
	return panels;
}

void BasicColorChooserUI::uninstallDefaultChoosers() {
	$var($AbstractColorChooserPanelArray, choosers, $nc(this->chooser)->getChooserPanels());
	for (int32_t i = 0; i < $nc(choosers)->length; ++i) {
		$nc(this->chooser)->removeChooserPanel(choosers->get(i));
	}
}

void BasicColorChooserUI::installUI($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$set(this, chooser, $cast($JColorChooser, c));
	$ColorChooserUI::installUI(c);
	installDefaults();
	installListeners();
	$set(this, tabbedPane, $new($JTabbedPane));
	$nc(this->tabbedPane)->setName("ColorChooser.tabPane"_s);
	$nc(this->tabbedPane)->setInheritsPopupMenu(true);
	$nc($($nc(this->tabbedPane)->getAccessibleContext()))->setAccessibleDescription($($nc(this->tabbedPane)->getName()));
	$set(this, singlePanel, $new($JPanel, static_cast<$LayoutManager*>($$new($CenterLayout))));
	$nc(this->singlePanel)->setName("ColorChooser.panel"_s);
	$nc(this->singlePanel)->setInheritsPopupMenu(true);
	$nc(this->chooser)->setLayout($$new($BorderLayout));
	$set(this, defaultChoosers, createDefaultChoosers());
	$nc(this->chooser)->setChooserPanels(this->defaultChoosers);
	$set(this, previewPanelHolder, $new($JPanel, static_cast<$LayoutManager*>($$new($CenterLayout))));
	$nc(this->previewPanelHolder)->setName("ColorChooser.previewPanelHolder"_s);
	if ($DefaultLookup::getBoolean(this->chooser, this, "ColorChooser.showPreviewPanelText"_s, true)) {
		$var($String, previewString, $UIManager::getString($of("ColorChooser.previewText"_s), $($nc(this->chooser)->getLocale())));
		$nc(this->previewPanelHolder)->setBorder($$new($TitledBorder, previewString));
	}
	$nc(this->previewPanelHolder)->setInheritsPopupMenu(true);
	installPreviewPanel();
	$nc(this->chooser)->applyComponentOrientation($($nc(c)->getComponentOrientation()));
}

void BasicColorChooserUI::uninstallUI($JComponent* c) {
	$nc(this->chooser)->remove(static_cast<$Component*>(this->tabbedPane));
	$nc(this->chooser)->remove(static_cast<$Component*>(this->singlePanel));
	$nc(this->chooser)->remove(static_cast<$Component*>(this->previewPanelHolder));
	uninstallDefaultChoosers();
	uninstallListeners();
	uninstallPreviewPanel();
	uninstallDefaults();
	$set(this, previewPanelHolder, nullptr);
	$set(this, previewPanel, nullptr);
	$set(this, defaultChoosers, nullptr);
	$set(this, chooser, nullptr);
	$set(this, tabbedPane, nullptr);
	$set(this, handler, nullptr);
}

void BasicColorChooserUI::installPreviewPanel() {
	$useLocalCurrentObjectStackCache();
	$var($JComponent, previewPanel, $nc(this->chooser)->getPreviewPanel());
	if (previewPanel == nullptr) {
		$assign(previewPanel, $ColorChooserComponentFactory::getPreviewPanel());
	} else {
		$load($JPanel);
		bool var$1 = $of($JPanel::class$)->equals($nc($of(previewPanel))->getClass());
		if (var$1 && (0 == $nc(previewPanel)->getComponentCount())) {
			$assign(previewPanel, nullptr);
		}
	}
	$set(this, previewPanel, previewPanel);
	if (previewPanel != nullptr) {
		$init($BorderLayout);
		$nc(this->chooser)->add(static_cast<$Component*>(this->previewPanelHolder), $of($BorderLayout::SOUTH));
		previewPanel->setForeground($($nc(this->chooser)->getColor()));
		$nc(this->previewPanelHolder)->add(static_cast<$Component*>(previewPanel));
		previewPanel->addMouseListener($(getHandler()));
		previewPanel->setInheritsPopupMenu(true);
	}
}

void BasicColorChooserUI::uninstallPreviewPanel() {
	if (this->previewPanel != nullptr) {
		$nc(this->previewPanel)->removeMouseListener($(getHandler()));
		$nc(this->previewPanelHolder)->remove(static_cast<$Component*>(this->previewPanel));
	}
	$nc(this->chooser)->remove(static_cast<$Component*>(this->previewPanelHolder));
}

void BasicColorChooserUI::installDefaults() {
	$LookAndFeel::installColorsAndFont(this->chooser, "ColorChooser.background"_s, "ColorChooser.foreground"_s, "ColorChooser.font"_s);
	$init($Boolean);
	$LookAndFeel::installProperty(this->chooser, "opaque"_s, $Boolean::TRUE);
	$var($TransferHandler, th, $nc(this->chooser)->getTransferHandler());
	if (th == nullptr || $instanceOf($UIResource, th)) {
		$nc(this->chooser)->setTransferHandler(BasicColorChooserUI::defaultTransferHandler);
	}
}

void BasicColorChooserUI::uninstallDefaults() {
	if ($instanceOf($UIResource, $($nc(this->chooser)->getTransferHandler()))) {
		$nc(this->chooser)->setTransferHandler(nullptr);
	}
}

void BasicColorChooserUI::installListeners() {
	$set(this, propertyChangeListener, createPropertyChangeListener());
	$nc(this->chooser)->addPropertyChangeListener(this->propertyChangeListener);
	$set(this, previewListener, getHandler());
	$nc($($nc(this->chooser)->getSelectionModel()))->addChangeListener(this->previewListener);
}

$BasicColorChooserUI$Handler* BasicColorChooserUI::getHandler() {
	if (this->handler == nullptr) {
		$set(this, handler, $new($BasicColorChooserUI$Handler, this));
	}
	return this->handler;
}

$PropertyChangeListener* BasicColorChooserUI::createPropertyChangeListener() {
	return getHandler();
}

void BasicColorChooserUI::uninstallListeners() {
	$nc(this->chooser)->removePropertyChangeListener(this->propertyChangeListener);
	$nc($($nc(this->chooser)->getSelectionModel()))->removeChangeListener(this->previewListener);
	$set(this, previewListener, nullptr);
}

void BasicColorChooserUI::selectionChanged($ColorSelectionModel* model) {
	$useLocalCurrentObjectStackCache();
	$var($JComponent, previewPanel, $nc(this->chooser)->getPreviewPanel());
	if (previewPanel != nullptr) {
		previewPanel->setForeground($($nc(model)->getSelectedColor()));
		previewPanel->repaint();
	}
	$var($AbstractColorChooserPanelArray, panels, $nc(this->chooser)->getChooserPanels());
	if (panels != nullptr) {
		{
			$var($AbstractColorChooserPanelArray, arr$, panels);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($AbstractColorChooserPanel, panel, arr$->get(i$));
				{
					if (panel != nullptr) {
						panel->updateChooser();
					}
				}
			}
		}
	}
}

void clinit$BasicColorChooserUI($Class* class$) {
	$assignStatic(BasicColorChooserUI::defaultTransferHandler, $new($BasicColorChooserUI$ColorTransferHandler));
}

BasicColorChooserUI::BasicColorChooserUI() {
}

$Class* BasicColorChooserUI::load$($String* name, bool initialize) {
	$loadClass(BasicColorChooserUI, name, initialize, &_BasicColorChooserUI_ClassInfo_, clinit$BasicColorChooserUI, allocate$BasicColorChooserUI);
	return class$;
}

$Class* BasicColorChooserUI::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax