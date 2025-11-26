#include <javax/swing/plaf/nimbus/NimbusLookAndFeel.h>

#include <java/awt/BorderLayout.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Image.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/image/BufferedImage.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Math.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <javax/swing/GrayFilter.h>
#include <javax/swing/Icon.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JToolBar.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/TitledBorder.h>
#include <javax/swing/plaf/BorderUIResource.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/nimbus/DerivedColor.h>
#include <javax/swing/plaf/nimbus/EffectUtils.h>
#include <javax/swing/plaf/nimbus/ImageCache.h>
#include <javax/swing/plaf/nimbus/LoweredBorder.h>
#include <javax/swing/plaf/nimbus/NimbusDefaults$DerivedFont.h>
#include <javax/swing/plaf/nimbus/NimbusDefaults.h>
#include <javax/swing/plaf/nimbus/NimbusLookAndFeel$1.h>
#include <javax/swing/plaf/nimbus/NimbusLookAndFeel$2.h>
#include <javax/swing/plaf/nimbus/NimbusLookAndFeel$DefaultsListener.h>
#include <javax/swing/plaf/nimbus/NimbusLookAndFeel$LinkProperty.h>
#include <javax/swing/plaf/nimbus/NimbusLookAndFeel$NimbusProperty.h>
#include <javax/swing/plaf/nimbus/NimbusStyle.h>
#include <javax/swing/plaf/nimbus/ToolBarSeparatorPainter.h>
#include <javax/swing/plaf/synth/Region.h>
#include <javax/swing/plaf/synth/SynthIcon.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <javax/swing/plaf/synth/SynthStyleFactory.h>
#include <sun/security/action/GetPropertyAction.h>
#include <sun/swing/ImageIconUIResource.h>
#include <sun/swing/plaf/GTKKeybindings.h>
#include <sun/swing/plaf/WindowsKeybindings.h>
#include <jcpp.h>

#undef ABOVE_TOP
#undef COMPONENT_KEYS

using $BorderLayout = ::java::awt::BorderLayout;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Image = ::java::awt::Image;
using $LayoutManager = ::java::awt::LayoutManager;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractMap = ::java::util::AbstractMap;
using $EventObject = ::java::util::EventObject;
using $HashMap = ::java::util::HashMap;
using $Hashtable = ::java::util::Hashtable;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $GrayFilter = ::javax::swing::GrayFilter;
using $Icon = ::javax::swing::Icon;
using $ImageIcon = ::javax::swing::ImageIcon;
using $JComponent = ::javax::swing::JComponent;
using $JToolBar = ::javax::swing::JToolBar;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIManager = ::javax::swing::UIManager;
using $Border = ::javax::swing::border::Border;
using $TitledBorder = ::javax::swing::border::TitledBorder;
using $BorderUIResource = ::javax::swing::plaf::BorderUIResource;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;
using $DerivedColor = ::javax::swing::plaf::nimbus::DerivedColor;
using $EffectUtils = ::javax::swing::plaf::nimbus::EffectUtils;
using $ImageCache = ::javax::swing::plaf::nimbus::ImageCache;
using $LoweredBorder = ::javax::swing::plaf::nimbus::LoweredBorder;
using $NimbusDefaults = ::javax::swing::plaf::nimbus::NimbusDefaults;
using $NimbusDefaults$DerivedFont = ::javax::swing::plaf::nimbus::NimbusDefaults$DerivedFont;
using $NimbusLookAndFeel$1 = ::javax::swing::plaf::nimbus::NimbusLookAndFeel$1;
using $NimbusLookAndFeel$2 = ::javax::swing::plaf::nimbus::NimbusLookAndFeel$2;
using $NimbusLookAndFeel$DefaultsListener = ::javax::swing::plaf::nimbus::NimbusLookAndFeel$DefaultsListener;
using $NimbusLookAndFeel$LinkProperty = ::javax::swing::plaf::nimbus::NimbusLookAndFeel$LinkProperty;
using $NimbusLookAndFeel$NimbusProperty = ::javax::swing::plaf::nimbus::NimbusLookAndFeel$NimbusProperty;
using $NimbusStyle = ::javax::swing::plaf::nimbus::NimbusStyle;
using $ToolBarSeparatorPainter = ::javax::swing::plaf::nimbus::ToolBarSeparatorPainter;
using $Region = ::javax::swing::plaf::synth::Region;
using $SynthIcon = ::javax::swing::plaf::synth::SynthIcon;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;
using $SynthStyleFactory = ::javax::swing::plaf::synth::SynthStyleFactory;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;
using $ImageIconUIResource = ::sun::swing::ImageIconUIResource;
using $GTKKeybindings = ::sun::swing::plaf::GTKKeybindings;
using $WindowsKeybindings = ::sun::swing::plaf::WindowsKeybindings;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$FieldInfo _NimbusLookAndFeel_FieldInfo_[] = {
	{"COMPONENT_KEYS", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NimbusLookAndFeel, COMPONENT_KEYS)},
	{"defaults", "Ljavax/swing/plaf/nimbus/NimbusDefaults;", nullptr, $PRIVATE, $field(NimbusLookAndFeel, defaults)},
	{"uiDefaults", "Ljavax/swing/UIDefaults;", nullptr, $PRIVATE, $field(NimbusLookAndFeel, uiDefaults)},
	{"defaultsListener", "Ljavax/swing/plaf/nimbus/NimbusLookAndFeel$DefaultsListener;", nullptr, $PRIVATE, $field(NimbusLookAndFeel, defaultsListener)},
	{"compiledDefaults", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;>;", $PRIVATE, $field(NimbusLookAndFeel, compiledDefaults)},
	{"defaultListenerAdded", "Z", nullptr, $PRIVATE, $field(NimbusLookAndFeel, defaultListenerAdded)},
	{}
};

$MethodInfo _NimbusLookAndFeel_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NimbusLookAndFeel::*)()>(&NimbusLookAndFeel::init$))},
	{"addDefault", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(static_cast<void(NimbusLookAndFeel::*)($String*,Object$*)>(&NimbusLookAndFeel::addDefault))},
	{"deriveARGB", "(Ljava/awt/Color;Ljava/awt/Color;F)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($Color*,$Color*,float)>(&NimbusLookAndFeel::deriveARGB))},
	{"getDefaults", "()Ljavax/swing/UIDefaults;", nullptr, $PUBLIC},
	{"getDefaultsForPrefix", "(Ljava/lang/String;)Ljava/util/Map;", "(Ljava/lang/String;)Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;", 0},
	{"getDerivedColor", "(Ljava/lang/String;FFFIZ)Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getDerivedColor", "(Ljava/awt/Color;Ljava/awt/Color;FZ)Ljava/awt/Color;", nullptr, $PROTECTED | $FINAL, $method(static_cast<$Color*(NimbusLookAndFeel::*)($Color*,$Color*,float,bool)>(&NimbusLookAndFeel::getDerivedColor))},
	{"getDerivedColor", "(Ljava/awt/Color;Ljava/awt/Color;F)Ljava/awt/Color;", nullptr, $PROTECTED | $FINAL, $method(static_cast<$Color*(NimbusLookAndFeel::*)($Color*,$Color*,float)>(&NimbusLookAndFeel::getDerivedColor))},
	{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDisabledIcon", "(Ljavax/swing/JComponent;Ljavax/swing/Icon;)Ljavax/swing/Icon;", nullptr, $PUBLIC},
	{"getID", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getStyle", "(Ljavax/swing/JComponent;Ljavax/swing/plaf/synth/Region;)Ljavax/swing/plaf/nimbus/NimbusStyle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$NimbusStyle*(*)($JComponent*,$Region*)>(&NimbusLookAndFeel::getStyle))},
	{"getSystemProperty", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(NimbusLookAndFeel::*)($String*)>(&NimbusLookAndFeel::getSystemProperty))},
	{"initialize", "()V", nullptr, $PUBLIC},
	{"parsePrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($String*)>(&NimbusLookAndFeel::parsePrefix))},
	{"register", "(Ljavax/swing/plaf/synth/Region;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"resolveToolbarConstraint", "(Ljavax/swing/JToolBar;)Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)($JToolBar*)>(&NimbusLookAndFeel::resolveToolbarConstraint))},
	{"shouldUpdateStyleOnAncestorChanged", "()Z", nullptr, $PUBLIC},
	{"shouldUpdateStyleOnEvent", "(Ljava/beans/PropertyChangeEvent;)Z", nullptr, $PROTECTED},
	{"uninitialize", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _NimbusLookAndFeel_InnerClassesInfo_[] = {
	{"javax.swing.plaf.nimbus.NimbusLookAndFeel$DefaultsListener", "javax.swing.plaf.nimbus.NimbusLookAndFeel", "DefaultsListener", $PRIVATE},
	{"javax.swing.plaf.nimbus.NimbusLookAndFeel$NimbusProperty", "javax.swing.plaf.nimbus.NimbusLookAndFeel", "NimbusProperty", $PRIVATE},
	{"javax.swing.plaf.nimbus.NimbusLookAndFeel$LinkProperty", "javax.swing.plaf.nimbus.NimbusLookAndFeel", "LinkProperty", $PRIVATE},
	{"javax.swing.plaf.nimbus.NimbusLookAndFeel$2", nullptr, nullptr, 0},
	{"javax.swing.plaf.nimbus.NimbusLookAndFeel$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NimbusLookAndFeel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.nimbus.NimbusLookAndFeel",
	"javax.swing.plaf.synth.SynthLookAndFeel",
	nullptr,
	_NimbusLookAndFeel_FieldInfo_,
	_NimbusLookAndFeel_MethodInfo_,
	nullptr,
	nullptr,
	_NimbusLookAndFeel_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.nimbus.NimbusLookAndFeel$DefaultsListener,javax.swing.plaf.nimbus.NimbusLookAndFeel$NimbusProperty,javax.swing.plaf.nimbus.NimbusLookAndFeel$LinkProperty,javax.swing.plaf.nimbus.NimbusLookAndFeel$2,javax.swing.plaf.nimbus.NimbusLookAndFeel$1"
};

$Object* allocate$NimbusLookAndFeel($Class* clazz) {
	return $of($alloc(NimbusLookAndFeel));
}

$StringArray* NimbusLookAndFeel::COMPONENT_KEYS = nullptr;

void NimbusLookAndFeel::init$() {
	$SynthLookAndFeel::init$();
	$set(this, defaultsListener, $new($NimbusLookAndFeel$DefaultsListener, this));
	$set(this, compiledDefaults, nullptr);
	this->defaultListenerAdded = false;
	$set(this, defaults, $new($NimbusDefaults));
}

void NimbusLookAndFeel::initialize() {
	$SynthLookAndFeel::initialize();
	$nc(this->defaults)->initialize();
	setStyleFactory($$new($NimbusLookAndFeel$1, this));
}

void NimbusLookAndFeel::uninitialize() {
	$useLocalCurrentObjectStackCache();
	$SynthLookAndFeel::uninitialize();
	$nc(this->defaults)->uninitialize();
	$nc($($ImageCache::getInstance()))->flush();
	$nc($($UIManager::getDefaults()))->removePropertyChangeListener(this->defaultsListener);
}

$UIDefaults* NimbusLookAndFeel::getDefaults() {
	$useLocalCurrentObjectStackCache();
	if (this->uiDefaults == nullptr) {
		$var($String, osName, getSystemProperty("os.name"_s));
		bool isWindows = osName != nullptr && osName->contains("Windows"_s);
		$set(this, uiDefaults, $SynthLookAndFeel::getDefaults());
		$nc(this->defaults)->initializeDefaults(this->uiDefaults);
		if (isWindows) {
			$WindowsKeybindings::installKeybindings(this->uiDefaults);
		} else {
			$GTKKeybindings::installKeybindings(this->uiDefaults);
		}
		$nc(this->uiDefaults)->put("TitledBorder.titlePosition"_s, $($Integer::valueOf($TitledBorder::ABOVE_TOP)));
		$nc(this->uiDefaults)->put("TitledBorder.border"_s, $$new($BorderUIResource, $$new($LoweredBorder)));
		$nc(this->uiDefaults)->put("TitledBorder.titleColor"_s, $(getDerivedColor("text"_s, 0.0f, 0.0f, 0.23f, 0, true)));
		$nc(this->uiDefaults)->put("TitledBorder.font"_s, $$new($NimbusDefaults$DerivedFont, "defaultFont"_s, 1.0f, $($Boolean::valueOf(true)), nullptr));
		$nc(this->uiDefaults)->put("OptionPane.isYesLast"_s, $($Boolean::valueOf(!isWindows)));
		$nc(this->uiDefaults)->put("Table.scrollPaneCornerComponent"_s, $$new($NimbusLookAndFeel$2, this));
		$nc(this->uiDefaults)->put("ToolBarSeparator[Enabled].backgroundPainter"_s, $$new($ToolBarSeparatorPainter));
		{
			$var($StringArray, arr$, NimbusLookAndFeel::COMPONENT_KEYS);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($String, componentKey, arr$->get(i$));
				{
					$var($String, key, $str({componentKey, ".foreground"_s}));
					if (!$nc(this->uiDefaults)->containsKey(key)) {
						$nc(this->uiDefaults)->put(key, $$new($NimbusLookAndFeel$NimbusProperty, this, componentKey, "textForeground"_s));
					}
					$assign(key, $str({componentKey, ".background"_s}));
					if (!$nc(this->uiDefaults)->containsKey(key)) {
						$nc(this->uiDefaults)->put(key, $$new($NimbusLookAndFeel$NimbusProperty, this, componentKey, "background"_s));
					}
					$assign(key, $str({componentKey, ".font"_s}));
					if (!$nc(this->uiDefaults)->containsKey(key)) {
						$nc(this->uiDefaults)->put(key, $$new($NimbusLookAndFeel$NimbusProperty, this, componentKey, "font"_s));
					}
					$assign(key, $str({componentKey, ".disabledText"_s}));
					if (!$nc(this->uiDefaults)->containsKey(key)) {
						$nc(this->uiDefaults)->put(key, $$new($NimbusLookAndFeel$NimbusProperty, this, componentKey, "Disabled"_s, "textForeground"_s));
					}
					$assign(key, $str({componentKey, ".disabled"_s}));
					if (!$nc(this->uiDefaults)->containsKey(key)) {
						$nc(this->uiDefaults)->put(key, $$new($NimbusLookAndFeel$NimbusProperty, this, componentKey, "Disabled"_s, "background"_s));
					}
				}
			}
		}
		$nc(this->uiDefaults)->put("FileView.computerIcon"_s, $$new($NimbusLookAndFeel$LinkProperty, this, "FileChooser.homeFolderIcon"_s));
		$nc(this->uiDefaults)->put("FileView.directoryIcon"_s, $$new($NimbusLookAndFeel$LinkProperty, this, "FileChooser.directoryIcon"_s));
		$nc(this->uiDefaults)->put("FileView.fileIcon"_s, $$new($NimbusLookAndFeel$LinkProperty, this, "FileChooser.fileIcon"_s));
		$nc(this->uiDefaults)->put("FileView.floppyDriveIcon"_s, $$new($NimbusLookAndFeel$LinkProperty, this, "FileChooser.floppyDriveIcon"_s));
		$nc(this->uiDefaults)->put("FileView.hardDriveIcon"_s, $$new($NimbusLookAndFeel$LinkProperty, this, "FileChooser.hardDriveIcon"_s));
	}
	return this->uiDefaults;
}

$NimbusStyle* NimbusLookAndFeel::getStyle($JComponent* c, $Region* r) {
	$init(NimbusLookAndFeel);
	return $cast($NimbusStyle, $SynthLookAndFeel::getStyle(c, r));
}

$String* NimbusLookAndFeel::getName() {
	return "Nimbus"_s;
}

$String* NimbusLookAndFeel::getID() {
	return "Nimbus"_s;
}

$String* NimbusLookAndFeel::getDescription() {
	return "Nimbus Look and Feel"_s;
}

bool NimbusLookAndFeel::shouldUpdateStyleOnAncestorChanged() {
	return true;
}

bool NimbusLookAndFeel::shouldUpdateStyleOnEvent($PropertyChangeEvent* ev) {
	$useLocalCurrentObjectStackCache();
	$var($String, eName, $nc(ev)->getPropertyName());
	if ("name"_s == eName || "ancestor"_s == eName || "Nimbus.Overrides"_s == eName || "Nimbus.Overrides.InheritDefaults"_s == eName || "JComponent.sizeVariant"_s == eName) {
		$var($JComponent, c, $cast($JComponent, ev->getSource()));
		$nc(this->defaults)->clearOverridesCache(c);
		return true;
	}
	return $SynthLookAndFeel::shouldUpdateStyleOnEvent(ev);
}

void NimbusLookAndFeel::register$($Region* region, $String* prefix) {
	$nc(this->defaults)->register$(region, prefix);
}

$String* NimbusLookAndFeel::getSystemProperty($String* key) {
	$beforeCallerSensitive();
	return $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, key))));
}

$Icon* NimbusLookAndFeel::getDisabledIcon($JComponent* component, $Icon* icon) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($SynthIcon, icon)) {
		$var($SynthIcon, si, $cast($SynthIcon, icon));
		int32_t var$0 = $nc(si)->getIconWidth();
		$var($BufferedImage, img, $EffectUtils::createCompatibleTranslucentImage(var$0, si->getIconHeight()));
		$var($Graphics2D, gfx, $nc(img)->createGraphics());
		$nc(si)->paintIcon(component, gfx, 0, 0);
		$nc(gfx)->dispose();
		return $new($ImageIconUIResource, $($GrayFilter::createDisabledImage(img)));
	} else {
		return $SynthLookAndFeel::getDisabledIcon(component, icon);
	}
}

$Color* NimbusLookAndFeel::getDerivedColor($String* uiDefaultParentName, float hOffset, float sOffset, float bOffset, int32_t aOffset, bool uiResource) {
	return $nc(this->defaults)->getDerivedColor(uiDefaultParentName, hOffset, sOffset, bOffset, aOffset, uiResource);
}

$Color* NimbusLookAndFeel::getDerivedColor($Color* color1, $Color* color2, float midPoint, bool uiResource) {
	int32_t argb = deriveARGB(color1, color2, midPoint);
	if (uiResource) {
		return $new($ColorUIResource, argb);
	} else {
		return $new($Color, argb);
	}
}

$Color* NimbusLookAndFeel::getDerivedColor($Color* color1, $Color* color2, float midPoint) {
	return getDerivedColor(color1, color2, midPoint, true);
}

$Object* NimbusLookAndFeel::resolveToolbarConstraint($JToolBar* toolbar) {
	$init(NimbusLookAndFeel);
	$useLocalCurrentObjectStackCache();
	if (toolbar != nullptr) {
		$var($Container, parent, toolbar->getParent());
		if (parent != nullptr) {
			$var($LayoutManager, m, parent->getLayout());
			if ($instanceOf($BorderLayout, m)) {
				$var($BorderLayout, b, $cast($BorderLayout, m));
				$var($Object, con, $nc(b)->getConstraints(toolbar));
				if ($equals(con, "South"_s) || $equals(con, "East"_s) || $equals(con, "West"_s)) {
					return $of(con);
				}
				return $of("North"_s);
			}
		}
	}
	return $of("North"_s);
}

int32_t NimbusLookAndFeel::deriveARGB($Color* color1, $Color* color2, float midPoint) {
	$init(NimbusLookAndFeel);
	int32_t var$0 = $nc(color1)->getRed();
	int32_t var$2 = $nc(color2)->getRed();
	int32_t var$1 = $Math::round((var$2 - color1->getRed()) * midPoint);
	int32_t r = var$0 + var$1;
	int32_t var$3 = color1->getGreen();
	int32_t var$5 = $nc(color2)->getGreen();
	int32_t var$4 = $Math::round((var$5 - color1->getGreen()) * midPoint);
	int32_t g = var$3 + var$4;
	int32_t var$6 = color1->getBlue();
	int32_t var$8 = $nc(color2)->getBlue();
	int32_t var$7 = $Math::round((var$8 - color1->getBlue()) * midPoint);
	int32_t b = var$6 + var$7;
	int32_t var$9 = color1->getAlpha();
	int32_t var$11 = $nc(color2)->getAlpha();
	int32_t var$10 = $Math::round((var$11 - color1->getAlpha()) * midPoint);
	int32_t a = var$9 + var$10;
	return (((((int32_t)(a & (uint32_t)255)) << 24) | (((int32_t)(r & (uint32_t)255)) << 16)) | (((int32_t)(g & (uint32_t)255)) << 8)) | ((int32_t)(b & (uint32_t)255));
}

$String* NimbusLookAndFeel::parsePrefix($String* key) {
	$init(NimbusLookAndFeel);
	if (key == nullptr) {
		return nullptr;
	}
	bool inquotes = false;
	for (int32_t i = 0; i < $nc(key)->length(); ++i) {
		char16_t c = key->charAt(i);
		if (c == u'\"') {
			inquotes = !inquotes;
		} else if ((c == u'[' || c == u'.') && !inquotes) {
			return key->substring(0, i);
		}
	}
	return nullptr;
}

$Map* NimbusLookAndFeel::getDefaultsForPrefix($String* prefix) {
	$useLocalCurrentObjectStackCache();
	if (this->compiledDefaults == nullptr) {
		$set(this, compiledDefaults, $new($HashMap));
		{
			$var($Iterator, i$, $nc($($nc($($UIManager::getDefaults()))->entrySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
				{
					if ($instanceOf($String, $($nc(entry)->getKey()))) {
						$var($String, var$0, $cast($String, entry->getKey()));
						addDefault(var$0, $(entry->getValue()));
					}
				}
			}
		}
		if (!this->defaultListenerAdded) {
			$nc($($UIManager::getDefaults()))->addPropertyChangeListener(this->defaultsListener);
			this->defaultListenerAdded = true;
		}
	}
	return $cast($Map, $nc(this->compiledDefaults)->get(prefix));
}

void NimbusLookAndFeel::addDefault($String* key, Object$* value) {
	$useLocalCurrentObjectStackCache();
	if (this->compiledDefaults == nullptr) {
		return;
	}
	$var($String, prefix, parsePrefix(key));
	if (prefix != nullptr) {
		$var($Map, keys, $cast($Map, $nc(this->compiledDefaults)->get(prefix)));
		if (keys == nullptr) {
			$assign(keys, $new($HashMap));
			$nc(this->compiledDefaults)->put(prefix, keys);
		}
		$nc(keys)->put(key, value);
	}
}

void clinit$NimbusLookAndFeel($Class* class$) {
	$assignStatic(NimbusLookAndFeel::COMPONENT_KEYS, $new($StringArray, {
		"ArrowButton"_s,
		"Button"_s,
		"CheckBox"_s,
		"CheckBoxMenuItem"_s,
		"ColorChooser"_s,
		"ComboBox"_s,
		"DesktopPane"_s,
		"DesktopIcon"_s,
		"EditorPane"_s,
		"FileChooser"_s,
		"FormattedTextField"_s,
		"InternalFrame"_s,
		"InternalFrameTitlePane"_s,
		"Label"_s,
		"List"_s,
		"Menu"_s,
		"MenuBar"_s,
		"MenuItem"_s,
		"OptionPane"_s,
		"Panel"_s,
		"PasswordField"_s,
		"PopupMenu"_s,
		"PopupMenuSeparator"_s,
		"ProgressBar"_s,
		"RadioButton"_s,
		"RadioButtonMenuItem"_s,
		"RootPane"_s,
		"ScrollBar"_s,
		"ScrollBarTrack"_s,
		"ScrollBarThumb"_s,
		"ScrollPane"_s,
		"Separator"_s,
		"Slider"_s,
		"SliderTrack"_s,
		"SliderThumb"_s,
		"Spinner"_s,
		"SplitPane"_s,
		"TabbedPane"_s,
		"Table"_s,
		"TableHeader"_s,
		"TextArea"_s,
		"TextField"_s,
		"TextPane"_s,
		"ToggleButton"_s,
		"ToolBar"_s,
		"ToolTip"_s,
		"Tree"_s,
		"Viewport"_s
	}));
}

NimbusLookAndFeel::NimbusLookAndFeel() {
}

$Class* NimbusLookAndFeel::load$($String* name, bool initialize) {
	$loadClass(NimbusLookAndFeel, name, initialize, &_NimbusLookAndFeel_ClassInfo_, clinit$NimbusLookAndFeel, allocate$NimbusLookAndFeel);
	return class$;
}

$Class* NimbusLookAndFeel::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax