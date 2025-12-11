#include <com/sun/java/swing/plaf/gtk/GTKStyleFactory.h>

#include <com/sun/java/swing/plaf/gtk/GTKEngine$WidgetType.h>
#include <com/sun/java/swing/plaf/gtk/GTKEngine.h>
#include <com/sun/java/swing/plaf/gtk/GTKStyle.h>
#include <com/sun/java/swing/plaf/gtk/GTKStyleFactory$ComplexKey.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Font.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JToolBar.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/synth/Region.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <javax/swing/plaf/synth/SynthStyleFactory.h>
#include <jcpp.h>

#undef BUTTON
#undef CHECK_BOX
#undef HORIZONTAL
#undef MENU
#undef MENU_BAR
#undef RADIO_BUTTON
#undef SCROLL_BAR

using $GTKEngine = ::com::sun::java::swing::plaf::gtk::GTKEngine;
using $GTKEngine$WidgetType = ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType;
using $GTKStyle = ::com::sun::java::swing::plaf::gtk::GTKStyle;
using $GTKStyleFactory$ComplexKey = ::com::sun::java::swing::plaf::gtk::GTKStyleFactory$ComplexKey;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Font = ::java::awt::Font;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JMenu = ::javax::swing::JMenu;
using $JScrollBar = ::javax::swing::JScrollBar;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JToolBar = ::javax::swing::JToolBar;
using $UIManager = ::javax::swing::UIManager;
using $Region = ::javax::swing::plaf::synth::Region;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;
using $SynthStyleFactory = ::javax::swing::plaf::synth::SynthStyleFactory;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$FieldInfo _GTKStyleFactory_FieldInfo_[] = {
	{"stylesCache", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Object;Lcom/sun/java/swing/plaf/gtk/GTKStyle;>;", $PRIVATE | $FINAL, $field(GTKStyleFactory, stylesCache)},
	{"defaultFont", "Ljava/awt/Font;", nullptr, $PRIVATE, $field(GTKStyleFactory, defaultFont)},
	{}
};

$MethodInfo _GTKStyleFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(GTKStyleFactory::*)()>(&GTKStyleFactory::init$))},
	{"getStyle", "(Ljavax/swing/JComponent;Ljavax/swing/plaf/synth/Region;)Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"initStyles", "(Ljava/awt/Font;)V", nullptr, 0},
	{}
};

$InnerClassInfo _GTKStyleFactory_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.GTKStyleFactory$ComplexKey", "com.sun.java.swing.plaf.gtk.GTKStyleFactory", "ComplexKey", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _GTKStyleFactory_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.GTKStyleFactory",
	"javax.swing.plaf.synth.SynthStyleFactory",
	nullptr,
	_GTKStyleFactory_FieldInfo_,
	_GTKStyleFactory_MethodInfo_,
	nullptr,
	nullptr,
	_GTKStyleFactory_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.GTKStyleFactory$ComplexKey"
};

$Object* allocate$GTKStyleFactory($Class* clazz) {
	return $of($alloc(GTKStyleFactory));
}

void GTKStyleFactory::init$() {
	$SynthStyleFactory::init$();
	$set(this, stylesCache, $new($HashMap));
}

$SynthStyle* GTKStyleFactory::getStyle($JComponent* c, $Region* id) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$GTKEngine$WidgetType* wt = $GTKEngine::getWidgetType(c, id);
		$var($Object, key, nullptr);
		$init($Region);
		if (id == $Region::SCROLL_BAR) {
			if (c != nullptr) {
				$var($JScrollBar, sb, $cast($JScrollBar, c));
				bool sp = ($instanceOf($JScrollPane, $(sb->getParent())));
				bool horiz = (sb->getOrientation() == $JScrollBar::HORIZONTAL);
				bool ltr = $nc($(sb->getComponentOrientation()))->isLeftToRight();
				bool focusable = sb->isFocusable();
				$assign(key, $new($GTKStyleFactory$ComplexKey, wt, $$new($ObjectArray, {
					$($of($Boolean::valueOf(sp))),
					$($of($Boolean::valueOf(horiz))),
					$($of($Boolean::valueOf(ltr))),
					$($of($Boolean::valueOf(focusable)))
				})));
			}
		} else {
			if (id == $Region::CHECK_BOX || id == $Region::RADIO_BUTTON) {
				if (c != nullptr) {
					bool ltr = $nc($(c->getComponentOrientation()))->isLeftToRight();
					$assign(key, $new($GTKStyleFactory$ComplexKey, wt, $$new($ObjectArray, {$($of($Boolean::valueOf(ltr)))})));
				}
			} else {
				if (id == $Region::BUTTON) {
					if (c != nullptr) {
						$var($JButton, btn, $cast($JButton, c));
						bool toolButton = ($instanceOf($JToolBar, $(btn->getParent())));
						bool defaultCapable = btn->isDefaultCapable();
						$assign(key, $new($GTKStyleFactory$ComplexKey, wt, $$new($ObjectArray, {
							$($of($Boolean::valueOf(toolButton))),
							$($of($Boolean::valueOf(defaultCapable)))
						})));
					}
				} else {
					if (id == $Region::MENU) {
						bool var$0 = $instanceOf($JMenu, c) && $nc(($cast($JMenu, c)))->isTopLevelMenu();
						if (var$0 && $UIManager::getBoolean("Menu.useMenuBarForTopLevelMenus"_s)) {
							$init($GTKEngine$WidgetType);
							wt = $GTKEngine$WidgetType::MENU_BAR;
						}
					}
				}
			}
		}
		if (key == nullptr) {
			$assign(key, wt);
		}
		$var($GTKStyle, result, $cast($GTKStyle, $nc(this->stylesCache)->get(key)));
		if (result == nullptr) {
			$assign(result, $new($GTKStyle, this->defaultFont, wt));
			$nc(this->stylesCache)->put(key, result);
		}
		return result;
	}
}

void GTKStyleFactory::initStyles($Font* defaultFont) {
	$set(this, defaultFont, defaultFont);
	$nc(this->stylesCache)->clear();
}

GTKStyleFactory::GTKStyleFactory() {
}

$Class* GTKStyleFactory::load$($String* name, bool initialize) {
	$loadClass(GTKStyleFactory, name, initialize, &_GTKStyleFactory_ClassInfo_, allocate$GTKStyleFactory);
	return class$;
}

$Class* GTKStyleFactory::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com