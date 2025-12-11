#include <javax/swing/plaf/synth/SynthLookAndFeel.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Toolkit.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/io/InputStream.h>
#include <java/io/NotSerializableException.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/net/URL.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Hashtable.h>
#include <java/util/Locale.h>
#include <java/util/Map.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/InsetsUIResource.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/synth/ColorType.h>
#include <javax/swing/plaf/synth/DefaultSynthStyleFactory.h>
#include <javax/swing/plaf/synth/Region.h>
#include <javax/swing/plaf/synth/SynthButtonUI.h>
#include <javax/swing/plaf/synth/SynthCheckBoxMenuItemUI.h>
#include <javax/swing/plaf/synth/SynthCheckBoxUI.h>
#include <javax/swing/plaf/synth/SynthColorChooserUI.h>
#include <javax/swing/plaf/synth/SynthComboBoxUI.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthDefaultLookup.h>
#include <javax/swing/plaf/synth/SynthDesktopIconUI.h>
#include <javax/swing/plaf/synth/SynthDesktopPaneUI.h>
#include <javax/swing/plaf/synth/SynthEditorPaneUI.h>
#include <javax/swing/plaf/synth/SynthFormattedTextFieldUI.h>
#include <javax/swing/plaf/synth/SynthInternalFrameUI.h>
#include <javax/swing/plaf/synth/SynthLabelUI.h>
#include <javax/swing/plaf/synth/SynthListUI.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel$AATextListener.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel$Handler.h>
#include <javax/swing/plaf/synth/SynthMenuBarUI.h>
#include <javax/swing/plaf/synth/SynthMenuItemUI.h>
#include <javax/swing/plaf/synth/SynthMenuUI.h>
#include <javax/swing/plaf/synth/SynthOptionPaneUI.h>
#include <javax/swing/plaf/synth/SynthPanelUI.h>
#include <javax/swing/plaf/synth/SynthParser.h>
#include <javax/swing/plaf/synth/SynthPasswordFieldUI.h>
#include <javax/swing/plaf/synth/SynthPopupMenuUI.h>
#include <javax/swing/plaf/synth/SynthProgressBarUI.h>
#include <javax/swing/plaf/synth/SynthRadioButtonMenuItemUI.h>
#include <javax/swing/plaf/synth/SynthRadioButtonUI.h>
#include <javax/swing/plaf/synth/SynthRootPaneUI.h>
#include <javax/swing/plaf/synth/SynthScrollBarUI.h>
#include <javax/swing/plaf/synth/SynthScrollPaneUI.h>
#include <javax/swing/plaf/synth/SynthSeparatorUI.h>
#include <javax/swing/plaf/synth/SynthSliderUI.h>
#include <javax/swing/plaf/synth/SynthSpinnerUI.h>
#include <javax/swing/plaf/synth/SynthSplitPaneUI.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <javax/swing/plaf/synth/SynthStyleFactory.h>
#include <javax/swing/plaf/synth/SynthTabbedPaneUI.h>
#include <javax/swing/plaf/synth/SynthTableHeaderUI.h>
#include <javax/swing/plaf/synth/SynthTableUI.h>
#include <javax/swing/plaf/synth/SynthTextAreaUI.h>
#include <javax/swing/plaf/synth/SynthTextFieldUI.h>
#include <javax/swing/plaf/synth/SynthTextPaneUI.h>
#include <javax/swing/plaf/synth/SynthToggleButtonUI.h>
#include <javax/swing/plaf/synth/SynthToolBarUI.h>
#include <javax/swing/plaf/synth/SynthToolTipUI.h>
#include <javax/swing/plaf/synth/SynthTreeUI.h>
#include <javax/swing/plaf/synth/SynthUI.h>
#include <javax/swing/plaf/synth/SynthViewportUI.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/SunToolkit.h>
#include <sun/swing/DefaultLookup.h>
#include <sun/swing/SwingAccessor$UIDefaultsAccessor.h>
#include <sun/swing/SwingAccessor.h>
#include <sun/swing/SwingUtilities2.h>
#include <sun/swing/plaf/synth/SynthFileChooserUI.h>
#include <jcpp.h>

#undef BACKGROUND
#undef CHINESE
#undef DISABLED
#undef EMPTY_UIRESOURCE_INSETS
#undef ENABLED
#undef FOCUSED
#undef JAPANESE
#undef KOREAN
#undef MOUSE_OVER
#undef RED
#undef SELECTED
#undef SELECTED_UI_KEY
#undef SELECTED_UI_STATE_KEY
#undef STYLE_FACTORY_KEY
#undef TRUE

using $ComponentArray = $Array<::java::awt::Component>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $Rectangle = ::java::awt::Rectangle;
using $Toolkit = ::java::awt::Toolkit;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $InputStream = ::java::io::InputStream;
using $NotSerializableException = ::java::io::NotSerializableException;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $URL = ::java::net::URL;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Hashtable = ::java::util::Hashtable;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $JComponent = ::javax::swing::JComponent;
using $JMenu = ::javax::swing::JMenu;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIManager = ::javax::swing::UIManager;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $InsetsUIResource = ::javax::swing::plaf::InsetsUIResource;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $ColorType = ::javax::swing::plaf::synth::ColorType;
using $DefaultSynthStyleFactory = ::javax::swing::plaf::synth::DefaultSynthStyleFactory;
using $Region = ::javax::swing::plaf::synth::Region;
using $SynthButtonUI = ::javax::swing::plaf::synth::SynthButtonUI;
using $SynthCheckBoxMenuItemUI = ::javax::swing::plaf::synth::SynthCheckBoxMenuItemUI;
using $SynthCheckBoxUI = ::javax::swing::plaf::synth::SynthCheckBoxUI;
using $SynthColorChooserUI = ::javax::swing::plaf::synth::SynthColorChooserUI;
using $SynthComboBoxUI = ::javax::swing::plaf::synth::SynthComboBoxUI;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthDefaultLookup = ::javax::swing::plaf::synth::SynthDefaultLookup;
using $SynthDesktopIconUI = ::javax::swing::plaf::synth::SynthDesktopIconUI;
using $SynthDesktopPaneUI = ::javax::swing::plaf::synth::SynthDesktopPaneUI;
using $SynthEditorPaneUI = ::javax::swing::plaf::synth::SynthEditorPaneUI;
using $SynthFormattedTextFieldUI = ::javax::swing::plaf::synth::SynthFormattedTextFieldUI;
using $SynthInternalFrameUI = ::javax::swing::plaf::synth::SynthInternalFrameUI;
using $SynthLabelUI = ::javax::swing::plaf::synth::SynthLabelUI;
using $SynthListUI = ::javax::swing::plaf::synth::SynthListUI;
using $SynthLookAndFeel$AATextListener = ::javax::swing::plaf::synth::SynthLookAndFeel$AATextListener;
using $SynthLookAndFeel$Handler = ::javax::swing::plaf::synth::SynthLookAndFeel$Handler;
using $SynthMenuBarUI = ::javax::swing::plaf::synth::SynthMenuBarUI;
using $SynthMenuItemUI = ::javax::swing::plaf::synth::SynthMenuItemUI;
using $SynthMenuUI = ::javax::swing::plaf::synth::SynthMenuUI;
using $SynthOptionPaneUI = ::javax::swing::plaf::synth::SynthOptionPaneUI;
using $SynthPanelUI = ::javax::swing::plaf::synth::SynthPanelUI;
using $SynthParser = ::javax::swing::plaf::synth::SynthParser;
using $SynthPasswordFieldUI = ::javax::swing::plaf::synth::SynthPasswordFieldUI;
using $SynthPopupMenuUI = ::javax::swing::plaf::synth::SynthPopupMenuUI;
using $SynthProgressBarUI = ::javax::swing::plaf::synth::SynthProgressBarUI;
using $SynthRadioButtonMenuItemUI = ::javax::swing::plaf::synth::SynthRadioButtonMenuItemUI;
using $SynthRadioButtonUI = ::javax::swing::plaf::synth::SynthRadioButtonUI;
using $SynthRootPaneUI = ::javax::swing::plaf::synth::SynthRootPaneUI;
using $SynthScrollBarUI = ::javax::swing::plaf::synth::SynthScrollBarUI;
using $SynthScrollPaneUI = ::javax::swing::plaf::synth::SynthScrollPaneUI;
using $SynthSeparatorUI = ::javax::swing::plaf::synth::SynthSeparatorUI;
using $SynthSliderUI = ::javax::swing::plaf::synth::SynthSliderUI;
using $SynthSpinnerUI = ::javax::swing::plaf::synth::SynthSpinnerUI;
using $SynthSplitPaneUI = ::javax::swing::plaf::synth::SynthSplitPaneUI;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;
using $SynthStyleFactory = ::javax::swing::plaf::synth::SynthStyleFactory;
using $SynthTabbedPaneUI = ::javax::swing::plaf::synth::SynthTabbedPaneUI;
using $SynthTableHeaderUI = ::javax::swing::plaf::synth::SynthTableHeaderUI;
using $SynthTableUI = ::javax::swing::plaf::synth::SynthTableUI;
using $SynthTextAreaUI = ::javax::swing::plaf::synth::SynthTextAreaUI;
using $SynthTextFieldUI = ::javax::swing::plaf::synth::SynthTextFieldUI;
using $SynthTextPaneUI = ::javax::swing::plaf::synth::SynthTextPaneUI;
using $SynthToggleButtonUI = ::javax::swing::plaf::synth::SynthToggleButtonUI;
using $SynthToolBarUI = ::javax::swing::plaf::synth::SynthToolBarUI;
using $SynthToolTipUI = ::javax::swing::plaf::synth::SynthToolTipUI;
using $SynthTreeUI = ::javax::swing::plaf::synth::SynthTreeUI;
using $SynthUI = ::javax::swing::plaf::synth::SynthUI;
using $SynthViewportUI = ::javax::swing::plaf::synth::SynthViewportUI;
using $AppContext = ::sun::awt::AppContext;
using $SunToolkit = ::sun::awt::SunToolkit;
using $DefaultLookup = ::sun::swing::DefaultLookup;
using $SwingAccessor = ::sun::swing::SwingAccessor;
using $SwingAccessor$UIDefaultsAccessor = ::sun::swing::SwingAccessor$UIDefaultsAccessor;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;
using $SynthFileChooserUI = ::sun::swing::plaf::synth::SynthFileChooserUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthLookAndFeel_FieldInfo_[] = {
	{"EMPTY_UIRESOURCE_INSETS", "Ljava/awt/Insets;", nullptr, $STATIC | $FINAL, $staticField(SynthLookAndFeel, EMPTY_UIRESOURCE_INSETS)},
	{"STYLE_FACTORY_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SynthLookAndFeel, STYLE_FACTORY_KEY)},
	{"SELECTED_UI_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SynthLookAndFeel, SELECTED_UI_KEY)},
	{"SELECTED_UI_STATE_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SynthLookAndFeel, SELECTED_UI_STATE_KEY)},
	{"lastFactory", "Ljavax/swing/plaf/synth/SynthStyleFactory;", nullptr, $PRIVATE | $STATIC, $staticField(SynthLookAndFeel, lastFactory)},
	{"lastContext", "Lsun/awt/AppContext;", nullptr, $PRIVATE | $STATIC, $staticField(SynthLookAndFeel, lastContext)},
	{"factory", "Ljavax/swing/plaf/synth/SynthStyleFactory;", nullptr, $PRIVATE, $field(SynthLookAndFeel, factory)},
	{"defaultsMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;", $PRIVATE, $field(SynthLookAndFeel, defaultsMap)},
	{"_handler", "Ljavax/swing/plaf/synth/SynthLookAndFeel$Handler;", nullptr, $PRIVATE, $field(SynthLookAndFeel, _handler)},
	{"queue", "Ljava/lang/ref/ReferenceQueue;", "Ljava/lang/ref/ReferenceQueue<Ljavax/swing/LookAndFeel;>;", $PRIVATE | $STATIC, $staticField(SynthLookAndFeel, queue)},
	{}
};

$MethodInfo _SynthLookAndFeel_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SynthLookAndFeel::*)()>(&SynthLookAndFeel::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&SynthLookAndFeel::createUI))},
	{"flushUnreferenced", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&SynthLookAndFeel::flushUnreferenced))},
	{"getComponentState", "(Ljava/awt/Component;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($Component*)>(&SynthLookAndFeel::getComponentState))},
	{"getDefaults", "()Ljavax/swing/UIDefaults;", nullptr, $PUBLIC},
	{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getID", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPaintingInsets", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $STATIC, $method(static_cast<$Insets*(*)($SynthContext*,$Insets*)>(&SynthLookAndFeel::getPaintingInsets))},
	{"getRegion", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/synth/Region;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Region*(*)($JComponent*)>(&SynthLookAndFeel::getRegion))},
	{"getSelectedUI", "()Ljavax/swing/plaf/ComponentUI;", nullptr, $STATIC, $method(static_cast<$ComponentUI*(*)()>(&SynthLookAndFeel::getSelectedUI))},
	{"getSelectedUIState", "()I", nullptr, $STATIC, $method(static_cast<int32_t(*)()>(&SynthLookAndFeel::getSelectedUIState))},
	{"getStyle", "(Ljavax/swing/JComponent;Ljavax/swing/plaf/synth/Region;)Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SynthStyle*(*)($JComponent*,$Region*)>(&SynthLookAndFeel::getStyle))},
	{"getStyleFactory", "()Ljavax/swing/plaf/synth/SynthStyleFactory;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SynthStyleFactory*(*)()>(&SynthLookAndFeel::getStyleFactory))},
	{"getUIOfType", "(Ljavax/swing/plaf/ComponentUI;Ljava/lang/Class;)Ljava/lang/Object;", "(Ljavax/swing/plaf/ComponentUI;Ljava/lang/Class<*>;)Ljava/lang/Object;", $STATIC, $method(static_cast<$Object*(*)($ComponentUI*,$Class*)>(&SynthLookAndFeel::getUIOfType))},
	{"initialize", "()V", nullptr, $PUBLIC},
	{"isLeftToRight", "(Ljava/awt/Component;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($Component*)>(&SynthLookAndFeel::isLeftToRight))},
	{"isNativeLookAndFeel", "()Z", nullptr, $PUBLIC},
	{"isSupportedLookAndFeel", "()Z", nullptr, $PUBLIC},
	{"load", "(Ljava/io/InputStream;Ljava/lang/Class;)V", "(Ljava/io/InputStream;Ljava/lang/Class<*>;)V", $PUBLIC, nullptr, "java.text.ParseException"},
	{"load", "(Ljava/net/URL;)V", nullptr, $PUBLIC, nullptr, "java.text.ParseException,java.io.IOException"},
	{"paintRegion", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;Ljava/awt/Rectangle;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($SynthContext*,$Graphics*,$Rectangle*)>(&SynthLookAndFeel::paintRegion))},
	{"resetSelectedUI", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&SynthLookAndFeel::resetSelectedUI))},
	{"setSelectedUI", "(Ljavax/swing/plaf/ComponentUI;ZZZZ)V", nullptr, $STATIC, $method(static_cast<void(*)($ComponentUI*,bool,bool,bool,bool)>(&SynthLookAndFeel::setSelectedUI))},
	{"setStyleFactory", "(Ljavax/swing/plaf/synth/SynthStyleFactory;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($SynthStyleFactory*)>(&SynthLookAndFeel::setStyleFactory))},
	{"shouldUpdateStyle", "(Ljava/beans/PropertyChangeEvent;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($PropertyChangeEvent*)>(&SynthLookAndFeel::shouldUpdateStyle))},
	{"shouldUpdateStyleOnAncestorChanged", "()Z", nullptr, $PUBLIC},
	{"shouldUpdateStyleOnEvent", "(Ljava/beans/PropertyChangeEvent;)Z", nullptr, $PROTECTED},
	{"uninitialize", "()V", nullptr, $PUBLIC},
	{"update", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;)V", nullptr, $STATIC, $method(static_cast<void(*)($SynthContext*,$Graphics*)>(&SynthLookAndFeel::update))},
	{"updateStyle", "(Ljavax/swing/plaf/synth/SynthContext;Ljavax/swing/plaf/synth/SynthUI;)Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $STATIC, $method(static_cast<$SynthStyle*(*)($SynthContext*,$SynthUI*)>(&SynthLookAndFeel::updateStyle))},
	{"updateStyles", "(Ljava/awt/Component;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Component*)>(&SynthLookAndFeel::updateStyles))},
	{"updateSubregion", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;Ljava/awt/Rectangle;)V", nullptr, $STATIC, $method(static_cast<void(*)($SynthContext*,$Graphics*,$Rectangle*)>(&SynthLookAndFeel::updateSubregion))},
	{"useLAFConditions", "()Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)()>(&SynthLookAndFeel::useLAFConditions))},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthLookAndFeel::*)($ObjectOutputStream*)>(&SynthLookAndFeel::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _SynthLookAndFeel_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthLookAndFeel$Handler", "javax.swing.plaf.synth.SynthLookAndFeel", "Handler", $PRIVATE},
	{"javax.swing.plaf.synth.SynthLookAndFeel$AATextListener", "javax.swing.plaf.synth.SynthLookAndFeel", "AATextListener", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SynthLookAndFeel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.synth.SynthLookAndFeel",
	"javax.swing.plaf.basic.BasicLookAndFeel",
	nullptr,
	_SynthLookAndFeel_FieldInfo_,
	_SynthLookAndFeel_MethodInfo_,
	nullptr,
	nullptr,
	_SynthLookAndFeel_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthLookAndFeel$Handler,javax.swing.plaf.synth.SynthLookAndFeel$AATextListener,javax.swing.plaf.synth.SynthLookAndFeel$AATextListener$1"
};

$Object* allocate$SynthLookAndFeel($Class* clazz) {
	return $of($alloc(SynthLookAndFeel));
}

$Insets* SynthLookAndFeel::EMPTY_UIRESOURCE_INSETS = nullptr;
$Object* SynthLookAndFeel::STYLE_FACTORY_KEY = nullptr;
$Object* SynthLookAndFeel::SELECTED_UI_KEY = nullptr;
$Object* SynthLookAndFeel::SELECTED_UI_STATE_KEY = nullptr;
$SynthStyleFactory* SynthLookAndFeel::lastFactory = nullptr;
$AppContext* SynthLookAndFeel::lastContext = nullptr;
$ReferenceQueue* SynthLookAndFeel::queue = nullptr;

$ComponentUI* SynthLookAndFeel::getSelectedUI() {
	$init(SynthLookAndFeel);
	return $cast($ComponentUI, $nc($($AppContext::getAppContext()))->get(SynthLookAndFeel::SELECTED_UI_KEY));
}

void SynthLookAndFeel::setSelectedUI($ComponentUI* uix, bool selected, bool focused, bool enabled, bool rollover) {
	$init(SynthLookAndFeel);
	$useLocalCurrentObjectStackCache();
	int32_t selectedUIState = 0;
	if (selected) {
		selectedUIState = $SynthConstants::SELECTED;
		if (focused) {
			selectedUIState |= $SynthConstants::FOCUSED;
		}
	} else if (rollover && enabled) {
		selectedUIState |= $SynthConstants::MOUSE_OVER | $SynthConstants::ENABLED;
		if (focused) {
			selectedUIState |= $SynthConstants::FOCUSED;
		}
	} else if (enabled) {
		selectedUIState |= $SynthConstants::ENABLED;
		if (focused) {
			selectedUIState |= $SynthConstants::FOCUSED;
		}
	} else {
		selectedUIState |= $SynthConstants::DISABLED;
	}
	$var($AppContext, context, $AppContext::getAppContext());
	$nc(context)->put(SynthLookAndFeel::SELECTED_UI_KEY, uix);
	context->put(SynthLookAndFeel::SELECTED_UI_STATE_KEY, $($Integer::valueOf(selectedUIState)));
}

int32_t SynthLookAndFeel::getSelectedUIState() {
	$init(SynthLookAndFeel);
	$useLocalCurrentObjectStackCache();
	$var($Integer, result, $cast($Integer, $nc($($AppContext::getAppContext()))->get(SynthLookAndFeel::SELECTED_UI_STATE_KEY)));
	return result == nullptr ? 0 : $nc(result)->intValue();
}

void SynthLookAndFeel::resetSelectedUI() {
	$init(SynthLookAndFeel);
	$nc($($AppContext::getAppContext()))->remove(SynthLookAndFeel::SELECTED_UI_KEY);
}

void SynthLookAndFeel::setStyleFactory($SynthStyleFactory* cache) {
	$init(SynthLookAndFeel);
	$synchronized(SynthLookAndFeel::class$) {
		$var($AppContext, context, $AppContext::getAppContext());
		$assignStatic(SynthLookAndFeel::lastFactory, cache);
		$assignStatic(SynthLookAndFeel::lastContext, context);
		$nc(context)->put(SynthLookAndFeel::STYLE_FACTORY_KEY, cache);
	}
}

$SynthStyleFactory* SynthLookAndFeel::getStyleFactory() {
	$init(SynthLookAndFeel);
	$synchronized(SynthLookAndFeel::class$) {
		$var($AppContext, context, $AppContext::getAppContext());
		if (SynthLookAndFeel::lastContext == context) {
			return SynthLookAndFeel::lastFactory;
		}
		$assignStatic(SynthLookAndFeel::lastContext, context);
		$assignStatic(SynthLookAndFeel::lastFactory, $cast($SynthStyleFactory, $nc(context)->get(SynthLookAndFeel::STYLE_FACTORY_KEY)));
		return SynthLookAndFeel::lastFactory;
	}
}

int32_t SynthLookAndFeel::getComponentState($Component* c) {
	$init(SynthLookAndFeel);
	if ($nc(c)->isEnabled()) {
		if (c->isFocusOwner()) {
			return $SynthUI::ENABLED | $SynthUI::FOCUSED;
		}
		return $SynthUI::ENABLED;
	}
	return $SynthUI::DISABLED;
}

$SynthStyle* SynthLookAndFeel::getStyle($JComponent* c, $Region* region) {
	$init(SynthLookAndFeel);
	return $nc($(getStyleFactory()))->getStyle(c, region);
}

bool SynthLookAndFeel::shouldUpdateStyle($PropertyChangeEvent* event) {
	$init(SynthLookAndFeel);
	$var($LookAndFeel, laf, $UIManager::getLookAndFeel());
	return ($instanceOf(SynthLookAndFeel, laf) && $nc(($cast(SynthLookAndFeel, laf)))->shouldUpdateStyleOnEvent(event));
}

$SynthStyle* SynthLookAndFeel::updateStyle($SynthContext* context, $SynthUI* ui) {
	$init(SynthLookAndFeel);
	$useLocalCurrentObjectStackCache();
	$var($JComponent, var$0, $nc(context)->getComponent());
	$var($SynthStyle, newStyle, getStyle(var$0, $(context->getRegion())));
	$var($SynthStyle, oldStyle, $nc(context)->getStyle());
	if (newStyle != oldStyle) {
		if (oldStyle != nullptr) {
			oldStyle->uninstallDefaults(context);
		}
		context->setStyle(newStyle);
		$nc(newStyle)->installDefaults(context, ui);
	}
	return newStyle;
}

void SynthLookAndFeel::updateStyles($Component* c) {
	$init(SynthLookAndFeel);
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($JComponent, c)) {
		$var($String, name, $nc(c)->getName());
		c->setName(nullptr);
		if (name != nullptr) {
			c->setName(name);
		}
		$nc(($cast($JComponent, c)))->revalidate();
	}
	$var($ComponentArray, children, nullptr);
	if ($instanceOf($JMenu, c)) {
		$assign(children, $nc(($cast($JMenu, c)))->getMenuComponents());
	} else if ($instanceOf($Container, c)) {
		$assign(children, $nc(($cast($Container, c)))->getComponents());
	}
	if (children != nullptr) {
		{
			$var($ComponentArray, arr$, children);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Component, child, arr$->get(i$));
				{
					updateStyles(child);
				}
			}
		}
	}
	$nc(c)->repaint();
}

$Region* SynthLookAndFeel::getRegion($JComponent* c) {
	$init(SynthLookAndFeel);
	return $Region::getRegion(c);
}

$Insets* SynthLookAndFeel::getPaintingInsets($SynthContext* state, $Insets* insets$renamed) {
	$init(SynthLookAndFeel);
	$useLocalCurrentObjectStackCache();
	$var($Insets, insets, insets$renamed);
	if ($nc(state)->isSubregion()) {
		$assign(insets, $nc($(state->getStyle()))->getInsets(state, insets));
	} else {
		$assign(insets, $nc($(state->getComponent()))->getInsets(insets));
	}
	return insets;
}

void SynthLookAndFeel::update($SynthContext* state, $Graphics* g) {
	$init(SynthLookAndFeel);
	paintRegion(state, g, nullptr);
}

void SynthLookAndFeel::updateSubregion($SynthContext* state, $Graphics* g, $Rectangle* bounds) {
	$init(SynthLookAndFeel);
	paintRegion(state, g, bounds);
}

void SynthLookAndFeel::paintRegion($SynthContext* state, $Graphics* g, $Rectangle* bounds) {
	$init(SynthLookAndFeel);
	$useLocalCurrentObjectStackCache();
	$var($JComponent, c, $nc(state)->getComponent());
	$var($SynthStyle, style, state->getStyle());
	int32_t x = 0;
	int32_t y = 0;
	int32_t width = 0;
	int32_t height = 0;
	if (bounds == nullptr) {
		x = 0;
		y = 0;
		width = $nc(c)->getWidth();
		height = c->getHeight();
	} else {
		x = $nc(bounds)->x;
		y = bounds->y;
		width = bounds->width;
		height = bounds->height;
	}
	bool subregion = state->isSubregion();
	bool var$0 = (subregion && $nc(style)->isOpaque(state));
	if (var$0 || (!subregion && $nc(c)->isOpaque())) {
		$init($ColorType);
		$nc(g)->setColor($($nc(style)->getColor(state, $ColorType::BACKGROUND)));
		g->fillRect(x, y, width, height);
	}
}

bool SynthLookAndFeel::isLeftToRight($Component* c) {
	$init(SynthLookAndFeel);
	return $nc($($nc(c)->getComponentOrientation()))->isLeftToRight();
}

$Object* SynthLookAndFeel::getUIOfType($ComponentUI* ui, $Class* klass) {
	$init(SynthLookAndFeel);
	if ($nc(klass)->isInstance(ui)) {
		return $of(ui);
	}
	return $of(nullptr);
}

$ComponentUI* SynthLookAndFeel::createUI($JComponent* c) {
	$init(SynthLookAndFeel);
	$useLocalCurrentObjectStackCache();
	$var($String, key, $nc($($nc(c)->getUIClassID()))->intern());
	if (key == "ButtonUI"_s) {
		return $SynthButtonUI::createUI(c);
	} else if (key == "CheckBoxUI"_s) {
		return $SynthCheckBoxUI::createUI(c);
	} else if (key == "CheckBoxMenuItemUI"_s) {
		return $SynthCheckBoxMenuItemUI::createUI(c);
	} else if (key == "ColorChooserUI"_s) {
		return $SynthColorChooserUI::createUI(c);
	} else if (key == "ComboBoxUI"_s) {
		return $SynthComboBoxUI::createUI(c);
	} else if (key == "DesktopPaneUI"_s) {
		return $SynthDesktopPaneUI::createUI(c);
	} else if (key == "DesktopIconUI"_s) {
		return $SynthDesktopIconUI::createUI(c);
	} else if (key == "EditorPaneUI"_s) {
		return $SynthEditorPaneUI::createUI(c);
	} else if (key == "FileChooserUI"_s) {
		return $SynthFileChooserUI::createUI(c);
	} else if (key == "FormattedTextFieldUI"_s) {
		return $SynthFormattedTextFieldUI::createUI(c);
	} else if (key == "InternalFrameUI"_s) {
		return $SynthInternalFrameUI::createUI(c);
	} else if (key == "LabelUI"_s) {
		return $SynthLabelUI::createUI(c);
	} else if (key == "ListUI"_s) {
		return $SynthListUI::createUI(c);
	} else if (key == "MenuBarUI"_s) {
		return $SynthMenuBarUI::createUI(c);
	} else if (key == "MenuUI"_s) {
		return $SynthMenuUI::createUI(c);
	} else if (key == "MenuItemUI"_s) {
		return $SynthMenuItemUI::createUI(c);
	} else if (key == "OptionPaneUI"_s) {
		return $SynthOptionPaneUI::createUI(c);
	} else if (key == "PanelUI"_s) {
		return $SynthPanelUI::createUI(c);
	} else if (key == "PasswordFieldUI"_s) {
		return $SynthPasswordFieldUI::createUI(c);
	} else if (key == "PopupMenuSeparatorUI"_s) {
		return $SynthSeparatorUI::createUI(c);
	} else if (key == "PopupMenuUI"_s) {
		return $SynthPopupMenuUI::createUI(c);
	} else if (key == "ProgressBarUI"_s) {
		return $SynthProgressBarUI::createUI(c);
	} else if (key == "RadioButtonUI"_s) {
		return $SynthRadioButtonUI::createUI(c);
	} else if (key == "RadioButtonMenuItemUI"_s) {
		return $SynthRadioButtonMenuItemUI::createUI(c);
	} else if (key == "RootPaneUI"_s) {
		return $SynthRootPaneUI::createUI(c);
	} else if (key == "ScrollBarUI"_s) {
		return $SynthScrollBarUI::createUI(c);
	} else if (key == "ScrollPaneUI"_s) {
		return $SynthScrollPaneUI::createUI(c);
	} else if (key == "SeparatorUI"_s) {
		return $SynthSeparatorUI::createUI(c);
	} else if (key == "SliderUI"_s) {
		return $SynthSliderUI::createUI(c);
	} else if (key == "SpinnerUI"_s) {
		return $SynthSpinnerUI::createUI(c);
	} else if (key == "SplitPaneUI"_s) {
		return $SynthSplitPaneUI::createUI(c);
	} else if (key == "TabbedPaneUI"_s) {
		return $SynthTabbedPaneUI::createUI(c);
	} else if (key == "TableUI"_s) {
		return $SynthTableUI::createUI(c);
	} else if (key == "TableHeaderUI"_s) {
		return $SynthTableHeaderUI::createUI(c);
	} else if (key == "TextAreaUI"_s) {
		return $SynthTextAreaUI::createUI(c);
	} else if (key == "TextFieldUI"_s) {
		return $SynthTextFieldUI::createUI(c);
	} else if (key == "TextPaneUI"_s) {
		return $SynthTextPaneUI::createUI(c);
	} else if (key == "ToggleButtonUI"_s) {
		return $SynthToggleButtonUI::createUI(c);
	} else if (key == "ToolBarSeparatorUI"_s) {
		return $SynthSeparatorUI::createUI(c);
	} else if (key == "ToolBarUI"_s) {
		return $SynthToolBarUI::createUI(c);
	} else if (key == "ToolTipUI"_s) {
		return $SynthToolTipUI::createUI(c);
	} else if (key == "TreeUI"_s) {
		return $SynthTreeUI::createUI(c);
	} else if (key == "ViewportUI"_s) {
		return $SynthViewportUI::createUI(c);
	}
	return nullptr;
}

void SynthLookAndFeel::init$() {
	$BasicLookAndFeel::init$();
	$set(this, factory, $new($DefaultSynthStyleFactory));
	$set(this, _handler, $new($SynthLookAndFeel$Handler, this));
}

void SynthLookAndFeel::load($InputStream* input, $Class* resourceBase) {
	if (resourceBase == nullptr) {
		$throwNew($IllegalArgumentException, "You must supply a valid resource base Class"_s);
	}
	if (this->defaultsMap == nullptr) {
		$set(this, defaultsMap, $new($HashMap));
	}
	$$new($SynthParser)->parse(input, $cast($DefaultSynthStyleFactory, this->factory), nullptr, resourceBase, this->defaultsMap);
}

void SynthLookAndFeel::load($URL* url) {
	$useLocalCurrentObjectStackCache();
	if (url == nullptr) {
		$throwNew($IllegalArgumentException, "You must supply a valid Synth set URL"_s);
	}
	if (this->defaultsMap == nullptr) {
		$set(this, defaultsMap, $new($HashMap));
	}
	$var($InputStream, input, $nc(url)->openStream());
	$$new($SynthParser)->parse(input, $cast($DefaultSynthStyleFactory, this->factory), url, nullptr, this->defaultsMap);
}

void SynthLookAndFeel::initialize() {
	$useLocalCurrentObjectStackCache();
	$BasicLookAndFeel::initialize();
	$DefaultLookup::setDefaultLookup($$new($SynthDefaultLookup));
	setStyleFactory(this->factory);
	$nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->addPropertyChangeListener(this->_handler);
}

void SynthLookAndFeel::uninitialize() {
	$nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->removePropertyChangeListener(this->_handler);
	$BasicLookAndFeel::uninitialize();
}

$UIDefaults* SynthLookAndFeel::getDefaults() {
	$useLocalCurrentObjectStackCache();
	$var($UIDefaults, table, $new($UIDefaults, 60, 0.75f));
	$Region::registerUIs(table);
	table->setDefaultLocale($($Locale::getDefault()));
	$nc($($SwingAccessor::getUIDefaultsAccessor()))->addInternalBundle(table, "com.sun.swing.internal.plaf.basic.resources.basic"_s);
	$nc($($SwingAccessor::getUIDefaultsAccessor()))->addInternalBundle(table, "com.sun.swing.internal.plaf.synth.resources.synth"_s);
	$init($Boolean);
	table->put("TabbedPane.isTabRollover"_s, $Boolean::TRUE);
	table->put("ColorChooser.swatchesRecentSwatchSize"_s, $$new($Dimension, 10, 10));
	$init($Color);
	table->put("ColorChooser.swatchesDefaultRecentColor"_s, $Color::RED);
	table->put("ColorChooser.swatchesSwatchSize"_s, $$new($Dimension, 10, 10));
	$load($BasicLookAndFeel);
	table->put("html.pendingImage"_s, $($SwingUtilities2::makeIcon($of(this)->getClass(), $BasicLookAndFeel::class$, "icons/image-delayed.png"_s)));
	table->put("html.missingImage"_s, $($SwingUtilities2::makeIcon($of(this)->getClass(), $BasicLookAndFeel::class$, "icons/image-failed.png"_s)));
	table->put("PopupMenu.selectedWindowInputMapBindings"_s, $$new($ObjectArray, {
		$of("ESCAPE"_s),
		$of("cancel"_s),
		$of("DOWN"_s),
		$of("selectNext"_s),
		$of("KP_DOWN"_s),
		$of("selectNext"_s),
		$of("UP"_s),
		$of("selectPrevious"_s),
		$of("KP_UP"_s),
		$of("selectPrevious"_s),
		$of("LEFT"_s),
		$of("selectParent"_s),
		$of("KP_LEFT"_s),
		$of("selectParent"_s),
		$of("RIGHT"_s),
		$of("selectChild"_s),
		$of("KP_RIGHT"_s),
		$of("selectChild"_s),
		$of("ENTER"_s),
		$of("return"_s),
		$of("ctrl ENTER"_s),
		$of("return"_s),
		$of("SPACE"_s),
		$of("return"_s)
	}));
	table->put("PopupMenu.selectedWindowInputMapBindings.RightToLeft"_s, $$new($ObjectArray, {
		$of("LEFT"_s),
		$of("selectChild"_s),
		$of("KP_LEFT"_s),
		$of("selectChild"_s),
		$of("RIGHT"_s),
		$of("selectParent"_s),
		$of("KP_RIGHT"_s),
		$of("selectParent"_s)
	}));
	flushUnreferenced();
	$SwingUtilities2::putAATextInfo(useLAFConditions(), table);
	$new($SynthLookAndFeel$AATextListener, this);
	if (this->defaultsMap != nullptr) {
		table->putAll(this->defaultsMap);
	}
	return table;
}

bool SynthLookAndFeel::isSupportedLookAndFeel() {
	return true;
}

bool SynthLookAndFeel::isNativeLookAndFeel() {
	return false;
}

$String* SynthLookAndFeel::getDescription() {
	return "Synth look and feel"_s;
}

$String* SynthLookAndFeel::getName() {
	return "Synth look and feel"_s;
}

$String* SynthLookAndFeel::getID() {
	return "Synth"_s;
}

bool SynthLookAndFeel::shouldUpdateStyleOnAncestorChanged() {
	return false;
}

bool SynthLookAndFeel::shouldUpdateStyleOnEvent($PropertyChangeEvent* ev) {
	$var($String, eName, $nc(ev)->getPropertyName());
	if ("name"_s == eName || "componentOrientation"_s == eName) {
		return true;
	}
	if ("ancestor"_s == eName && ev->getNewValue() != nullptr) {
		return shouldUpdateStyleOnAncestorChanged();
	}
	return false;
}

bool SynthLookAndFeel::useLAFConditions() {
	$init(SynthLookAndFeel);
	$useLocalCurrentObjectStackCache();
	$var($String, language, $nc($($Locale::getDefault()))->getLanguage());
	$var($Toolkit, tk, $Toolkit::getDefaultToolkit());
	$var($String, desktop, ($instanceOf($SunToolkit, tk)) ? $nc(($cast($SunToolkit, tk)))->getDesktop() : ($String*)nullptr);
	bool var$1 = $nc($($nc($Locale::CHINESE)->getLanguage()))->equals(language);
	bool var$0 = var$1 || $nc($($nc($Locale::JAPANESE)->getLanguage()))->equals(language);
	bool isCjkLocale = (var$0 || $nc($($nc($Locale::KOREAN)->getLanguage()))->equals(language));
	bool isGnome = "gnome"_s->equals(desktop);
	bool isLocal = $SwingUtilities2::isLocalDisplay();
	return isLocal && (!isGnome || !isCjkLocale);
}

void SynthLookAndFeel::flushUnreferenced() {
	$init(SynthLookAndFeel);
	$var($SynthLookAndFeel$AATextListener, aatl, nullptr);
	while (($assign(aatl, $cast($SynthLookAndFeel$AATextListener, $nc(SynthLookAndFeel::queue)->poll()))) != nullptr) {
		$nc(aatl)->dispose();
	}
}

void SynthLookAndFeel::writeObject($ObjectOutputStream* out) {
	$throwNew($NotSerializableException, $($of(this)->getClass()->getName()));
}

void clinit$SynthLookAndFeel($Class* class$) {
	$assignStatic(SynthLookAndFeel::EMPTY_UIRESOURCE_INSETS, $new($InsetsUIResource, 0, 0, 0, 0));
	$assignStatic(SynthLookAndFeel::STYLE_FACTORY_KEY, $new($StringBuffer, "com.sun.java.swing.plaf.gtk.StyleCache"_s));
	$assignStatic(SynthLookAndFeel::SELECTED_UI_KEY, $new($StringBuilder, "selectedUI"_s));
	$assignStatic(SynthLookAndFeel::SELECTED_UI_STATE_KEY, $new($StringBuilder, "selectedUIState"_s));
	$assignStatic(SynthLookAndFeel::queue, $new($ReferenceQueue));
}

SynthLookAndFeel::SynthLookAndFeel() {
}

$Class* SynthLookAndFeel::load$($String* name, bool initialize) {
	$loadClass(SynthLookAndFeel, name, initialize, &_SynthLookAndFeel_ClassInfo_, clinit$SynthLookAndFeel, allocate$SynthLookAndFeel);
	return class$;
}

$Class* SynthLookAndFeel::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax