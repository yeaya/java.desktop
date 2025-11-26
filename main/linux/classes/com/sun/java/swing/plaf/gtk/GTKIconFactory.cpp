#include <com/sun/java/swing/plaf/gtk/GTKIconFactory.h>

#include <com/sun/java/swing/plaf/gtk/GTKIconFactory$DelegatingIcon.h>
#include <com/sun/java/swing/plaf/gtk/GTKIconFactory$MenuArrowIcon.h>
#include <com/sun/java/swing/plaf/gtk/GTKIconFactory$SynthExpanderIcon.h>
#include <com/sun/java/swing/plaf/gtk/GTKIconFactory$ToolBarHandleIcon.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <javax/swing/Icon.h>
#include <javax/swing/plaf/synth/SynthIcon.h>
#include <jcpp.h>

#undef ASCENDING_SORT_ICON
#undef CHECK_BOX_ICON
#undef CHECK_BOX_MENU_ITEM_CHECK_ICON
#undef CHECK_ICON_EXTRA_INSET
#undef DEFAULT_ICON_SIZE
#undef DEFAULT_ICON_SPACING
#undef DEFAULT_TOGGLE_MENU_ITEM_SIZE
#undef DESCENDING_SORT_ICON
#undef MENU_ARROW_ICON
#undef RADIO_BUTTON_ICON
#undef RADIO_BUTTON_MENU_ITEM_CHECK_ICON
#undef TOOL_BAR_HANDLE_ICON
#undef TREE_COLLAPSED_ICON
#undef TREE_EXPANDED_ICON

using $GTKIconFactory$DelegatingIcon = ::com::sun::java::swing::plaf::gtk::GTKIconFactory$DelegatingIcon;
using $GTKIconFactory$MenuArrowIcon = ::com::sun::java::swing::plaf::gtk::GTKIconFactory$MenuArrowIcon;
using $GTKIconFactory$SynthExpanderIcon = ::com::sun::java::swing::plaf::gtk::GTKIconFactory$SynthExpanderIcon;
using $GTKIconFactory$ToolBarHandleIcon = ::com::sun::java::swing::plaf::gtk::GTKIconFactory$ToolBarHandleIcon;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Icon = ::javax::swing::Icon;
using $SynthIcon = ::javax::swing::plaf::synth::SynthIcon;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$FieldInfo _GTKIconFactory_FieldInfo_[] = {
	{"CHECK_ICON_EXTRA_INSET", "I", nullptr, $STATIC | $FINAL, $constField(GTKIconFactory, CHECK_ICON_EXTRA_INSET)},
	{"DEFAULT_ICON_SPACING", "I", nullptr, $STATIC | $FINAL, $constField(GTKIconFactory, DEFAULT_ICON_SPACING)},
	{"DEFAULT_ICON_SIZE", "I", nullptr, $STATIC | $FINAL, $constField(GTKIconFactory, DEFAULT_ICON_SIZE)},
	{"DEFAULT_TOGGLE_MENU_ITEM_SIZE", "I", nullptr, $STATIC | $FINAL, $constField(GTKIconFactory, DEFAULT_TOGGLE_MENU_ITEM_SIZE)},
	{"RADIO_BUTTON_ICON", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(GTKIconFactory, RADIO_BUTTON_ICON)},
	{"CHECK_BOX_ICON", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(GTKIconFactory, CHECK_BOX_ICON)},
	{"MENU_ARROW_ICON", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(GTKIconFactory, MENU_ARROW_ICON)},
	{"CHECK_BOX_MENU_ITEM_CHECK_ICON", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(GTKIconFactory, CHECK_BOX_MENU_ITEM_CHECK_ICON)},
	{"RADIO_BUTTON_MENU_ITEM_CHECK_ICON", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(GTKIconFactory, RADIO_BUTTON_MENU_ITEM_CHECK_ICON)},
	{"TREE_EXPANDED_ICON", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(GTKIconFactory, TREE_EXPANDED_ICON)},
	{"TREE_COLLAPSED_ICON", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(GTKIconFactory, TREE_COLLAPSED_ICON)},
	{"ASCENDING_SORT_ICON", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(GTKIconFactory, ASCENDING_SORT_ICON)},
	{"DESCENDING_SORT_ICON", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(GTKIconFactory, DESCENDING_SORT_ICON)},
	{"TOOL_BAR_HANDLE_ICON", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(GTKIconFactory, TOOL_BAR_HANDLE_ICON)},
	{"iconsPool", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/java/swing/plaf/gtk/GTKIconFactory$DelegatingIcon;>;", $PRIVATE | $STATIC, $staticField(GTKIconFactory, iconsPool)},
	{}
};

$MethodInfo _GTKIconFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(GTKIconFactory::*)()>(&GTKIconFactory::init$))},
	{"getAscendingSortIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)()>(&GTKIconFactory::getAscendingSortIcon))},
	{"getCheckBoxIcon", "()Ljavax/swing/plaf/synth/SynthIcon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SynthIcon*(*)()>(&GTKIconFactory::getCheckBoxIcon))},
	{"getCheckBoxMenuItemCheckIcon", "()Ljavax/swing/plaf/synth/SynthIcon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SynthIcon*(*)()>(&GTKIconFactory::getCheckBoxMenuItemCheckIcon))},
	{"getDescendingSortIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)()>(&GTKIconFactory::getDescendingSortIcon))},
	{"getIcon", "(Ljava/lang/String;)Lcom/sun/java/swing/plaf/gtk/GTKIconFactory$DelegatingIcon;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$GTKIconFactory$DelegatingIcon*(*)($String*)>(&GTKIconFactory::getIcon))},
	{"getMenuArrowIcon", "()Ljavax/swing/plaf/synth/SynthIcon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SynthIcon*(*)()>(&GTKIconFactory::getMenuArrowIcon))},
	{"getRadioButtonIcon", "()Ljavax/swing/plaf/synth/SynthIcon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SynthIcon*(*)()>(&GTKIconFactory::getRadioButtonIcon))},
	{"getRadioButtonMenuItemCheckIcon", "()Ljavax/swing/plaf/synth/SynthIcon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SynthIcon*(*)()>(&GTKIconFactory::getRadioButtonMenuItemCheckIcon))},
	{"getToolBarHandleIcon", "()Ljavax/swing/plaf/synth/SynthIcon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SynthIcon*(*)()>(&GTKIconFactory::getToolBarHandleIcon))},
	{"getTreeCollapsedIcon", "()Ljavax/swing/plaf/synth/SynthIcon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SynthIcon*(*)()>(&GTKIconFactory::getTreeCollapsedIcon))},
	{"getTreeExpandedIcon", "()Ljavax/swing/plaf/synth/SynthIcon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SynthIcon*(*)()>(&GTKIconFactory::getTreeExpandedIcon))},
	{"resetIcons", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&GTKIconFactory::resetIcons))},
	{}
};

$InnerClassInfo _GTKIconFactory_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.GTKIconFactory$MenuArrowIcon", "com.sun.java.swing.plaf.gtk.GTKIconFactory", "MenuArrowIcon", $PRIVATE | $STATIC},
	{"com.sun.java.swing.plaf.gtk.GTKIconFactory$ToolBarHandleIcon", "com.sun.java.swing.plaf.gtk.GTKIconFactory", "ToolBarHandleIcon", $PRIVATE | $STATIC},
	{"com.sun.java.swing.plaf.gtk.GTKIconFactory$SynthExpanderIcon", "com.sun.java.swing.plaf.gtk.GTKIconFactory", "SynthExpanderIcon", $PRIVATE | $STATIC},
	{"com.sun.java.swing.plaf.gtk.GTKIconFactory$DelegatingIcon", "com.sun.java.swing.plaf.gtk.GTKIconFactory", "DelegatingIcon", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _GTKIconFactory_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.GTKIconFactory",
	"java.lang.Object",
	nullptr,
	_GTKIconFactory_FieldInfo_,
	_GTKIconFactory_MethodInfo_,
	nullptr,
	nullptr,
	_GTKIconFactory_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.GTKIconFactory$MenuArrowIcon,com.sun.java.swing.plaf.gtk.GTKIconFactory$ToolBarHandleIcon,com.sun.java.swing.plaf.gtk.GTKIconFactory$SynthExpanderIcon,com.sun.java.swing.plaf.gtk.GTKIconFactory$DelegatingIcon"
};

$Object* allocate$GTKIconFactory($Class* clazz) {
	return $of($alloc(GTKIconFactory));
}

$String* GTKIconFactory::RADIO_BUTTON_ICON = nullptr;
$String* GTKIconFactory::CHECK_BOX_ICON = nullptr;
$String* GTKIconFactory::MENU_ARROW_ICON = nullptr;
$String* GTKIconFactory::CHECK_BOX_MENU_ITEM_CHECK_ICON = nullptr;
$String* GTKIconFactory::RADIO_BUTTON_MENU_ITEM_CHECK_ICON = nullptr;
$String* GTKIconFactory::TREE_EXPANDED_ICON = nullptr;
$String* GTKIconFactory::TREE_COLLAPSED_ICON = nullptr;
$String* GTKIconFactory::ASCENDING_SORT_ICON = nullptr;
$String* GTKIconFactory::DESCENDING_SORT_ICON = nullptr;
$String* GTKIconFactory::TOOL_BAR_HANDLE_ICON = nullptr;
$Map* GTKIconFactory::iconsPool = nullptr;

void GTKIconFactory::init$() {
}

$GTKIconFactory$DelegatingIcon* GTKIconFactory::getIcon($String* methodName) {
	$init(GTKIconFactory);
	$var($GTKIconFactory$DelegatingIcon, result, $cast($GTKIconFactory$DelegatingIcon, $nc(GTKIconFactory::iconsPool)->get(methodName)));
	if (result == nullptr) {
		if (methodName == GTKIconFactory::TREE_COLLAPSED_ICON || methodName == GTKIconFactory::TREE_EXPANDED_ICON) {
			$assign(result, $new($GTKIconFactory$SynthExpanderIcon, methodName));
		} else {
			if (methodName == GTKIconFactory::TOOL_BAR_HANDLE_ICON) {
				$assign(result, $new($GTKIconFactory$ToolBarHandleIcon));
			} else {
				if (methodName == GTKIconFactory::MENU_ARROW_ICON) {
					$assign(result, $new($GTKIconFactory$MenuArrowIcon));
				} else {
					$assign(result, $new($GTKIconFactory$DelegatingIcon, methodName));
				}
			}
		}
		$nc(GTKIconFactory::iconsPool)->put(methodName, result);
	}
	return result;
}

$Icon* GTKIconFactory::getAscendingSortIcon() {
	$init(GTKIconFactory);
	return getIcon(GTKIconFactory::ASCENDING_SORT_ICON);
}

$Icon* GTKIconFactory::getDescendingSortIcon() {
	$init(GTKIconFactory);
	return getIcon(GTKIconFactory::DESCENDING_SORT_ICON);
}

$SynthIcon* GTKIconFactory::getTreeExpandedIcon() {
	$init(GTKIconFactory);
	return getIcon(GTKIconFactory::TREE_EXPANDED_ICON);
}

$SynthIcon* GTKIconFactory::getTreeCollapsedIcon() {
	$init(GTKIconFactory);
	return getIcon(GTKIconFactory::TREE_COLLAPSED_ICON);
}

$SynthIcon* GTKIconFactory::getRadioButtonIcon() {
	$init(GTKIconFactory);
	return getIcon(GTKIconFactory::RADIO_BUTTON_ICON);
}

$SynthIcon* GTKIconFactory::getCheckBoxIcon() {
	$init(GTKIconFactory);
	return getIcon(GTKIconFactory::CHECK_BOX_ICON);
}

$SynthIcon* GTKIconFactory::getMenuArrowIcon() {
	$init(GTKIconFactory);
	return getIcon(GTKIconFactory::MENU_ARROW_ICON);
}

$SynthIcon* GTKIconFactory::getCheckBoxMenuItemCheckIcon() {
	$init(GTKIconFactory);
	return getIcon(GTKIconFactory::CHECK_BOX_MENU_ITEM_CHECK_ICON);
}

$SynthIcon* GTKIconFactory::getRadioButtonMenuItemCheckIcon() {
	$init(GTKIconFactory);
	return getIcon(GTKIconFactory::RADIO_BUTTON_MENU_ITEM_CHECK_ICON);
}

$SynthIcon* GTKIconFactory::getToolBarHandleIcon() {
	$init(GTKIconFactory);
	return getIcon(GTKIconFactory::TOOL_BAR_HANDLE_ICON);
}

void GTKIconFactory::resetIcons() {
	$init(GTKIconFactory);
	$useLocalCurrentObjectStackCache();
	$synchronized(GTKIconFactory::iconsPool) {
		{
			$var($Iterator, i$, $nc($($nc(GTKIconFactory::iconsPool)->values()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($GTKIconFactory$DelegatingIcon, di, $cast($GTKIconFactory$DelegatingIcon, i$->next()));
				{
					$nc(di)->resetIconDimensions();
				}
			}
		}
	}
}

void clinit$GTKIconFactory($Class* class$) {
	$assignStatic(GTKIconFactory::RADIO_BUTTON_ICON, "paintRadioButtonIcon"_s);
	$assignStatic(GTKIconFactory::CHECK_BOX_ICON, "paintCheckBoxIcon"_s);
	$assignStatic(GTKIconFactory::MENU_ARROW_ICON, "paintMenuArrowIcon"_s);
	$assignStatic(GTKIconFactory::CHECK_BOX_MENU_ITEM_CHECK_ICON, "paintCheckBoxMenuItemCheckIcon"_s);
	$assignStatic(GTKIconFactory::RADIO_BUTTON_MENU_ITEM_CHECK_ICON, "paintRadioButtonMenuItemCheckIcon"_s);
	$assignStatic(GTKIconFactory::TREE_EXPANDED_ICON, "paintTreeExpandedIcon"_s);
	$assignStatic(GTKIconFactory::TREE_COLLAPSED_ICON, "paintTreeCollapsedIcon"_s);
	$assignStatic(GTKIconFactory::ASCENDING_SORT_ICON, "paintAscendingSortIcon"_s);
	$assignStatic(GTKIconFactory::DESCENDING_SORT_ICON, "paintDescendingSortIcon"_s);
	$assignStatic(GTKIconFactory::TOOL_BAR_HANDLE_ICON, "paintToolBarHandleIcon"_s);
	$assignStatic(GTKIconFactory::iconsPool, $Collections::synchronizedMap($$new($HashMap)));
}

GTKIconFactory::GTKIconFactory() {
}

$Class* GTKIconFactory::load$($String* name, bool initialize) {
	$loadClass(GTKIconFactory, name, initialize, &_GTKIconFactory_ClassInfo_, clinit$GTKIconFactory, allocate$GTKIconFactory);
	return class$;
}

$Class* GTKIconFactory::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com