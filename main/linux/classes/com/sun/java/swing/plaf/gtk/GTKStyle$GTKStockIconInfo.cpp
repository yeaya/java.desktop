#include <com/sun/java/swing/plaf/gtk/GTKStyle$GTKStockIconInfo.h>

#include <com/sun/java/swing/plaf/gtk/GTKStyle.h>
#include <java/awt/Dimension.h>
#include <java/lang/StringBuffer.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

#undef ICON_SIZE_KEY
#undef ICON_TYPE_MAP

using $DimensionArray = $Array<::java::awt::Dimension>;
using $GTKStyle = ::com::sun::java::swing::plaf::gtk::GTKStyle;
using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $AppContext = ::sun::awt::AppContext;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$FieldInfo _GTKStyle$GTKStockIconInfo_FieldInfo_[] = {
	{"ICON_TYPE_MAP", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;", $PRIVATE | $STATIC, $staticField(GTKStyle$GTKStockIconInfo, ICON_TYPE_MAP)},
	{"ICON_SIZE_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(GTKStyle$GTKStockIconInfo, ICON_SIZE_KEY)},
	{}
};

$MethodInfo _GTKStyle$GTKStockIconInfo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(GTKStyle$GTKStockIconInfo::*)()>(&GTKStyle$GTKStockIconInfo::init$))},
	{"getIconSize", "(I)Ljava/awt/Dimension;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Dimension*(*)(int32_t)>(&GTKStyle$GTKStockIconInfo::getIconSize))},
	{"getIconSizesMap", "()[Ljava/awt/Dimension;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$DimensionArray*(*)()>(&GTKStyle$GTKStockIconInfo::getIconSizesMap))},
	{"getIconType", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($String*)>(&GTKStyle$GTKStockIconInfo::getIconType))},
	{"initIconTypeMap", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&GTKStyle$GTKStockIconInfo::initIconTypeMap))},
	{"setIconSize", "(III)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(int32_t,int32_t,int32_t)>(&GTKStyle$GTKStockIconInfo::setIconSize))},
	{}
};

$InnerClassInfo _GTKStyle$GTKStockIconInfo_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.GTKStyle$GTKStockIconInfo", "com.sun.java.swing.plaf.gtk.GTKStyle", "GTKStockIconInfo", $STATIC},
	{}
};

$ClassInfo _GTKStyle$GTKStockIconInfo_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.GTKStyle$GTKStockIconInfo",
	"java.lang.Object",
	nullptr,
	_GTKStyle$GTKStockIconInfo_FieldInfo_,
	_GTKStyle$GTKStockIconInfo_MethodInfo_,
	nullptr,
	nullptr,
	_GTKStyle$GTKStockIconInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.GTKStyle"
};

$Object* allocate$GTKStyle$GTKStockIconInfo($Class* clazz) {
	return $of($alloc(GTKStyle$GTKStockIconInfo));
}

$Map* GTKStyle$GTKStockIconInfo::ICON_TYPE_MAP = nullptr;
$Object* GTKStyle$GTKStockIconInfo::ICON_SIZE_KEY = nullptr;

void GTKStyle$GTKStockIconInfo::init$() {
}

$DimensionArray* GTKStyle$GTKStockIconInfo::getIconSizesMap() {
	$init(GTKStyle$GTKStockIconInfo);
	$useLocalCurrentObjectStackCache();
	$var($AppContext, appContext, $AppContext::getAppContext());
	$var($DimensionArray, iconSizes, $cast($DimensionArray, $nc(appContext)->get(GTKStyle$GTKStockIconInfo::ICON_SIZE_KEY)));
	if (iconSizes == nullptr) {
		$assign(iconSizes, $new($DimensionArray, 7));
		iconSizes->set(0, nullptr);
		iconSizes->set(1, $$new($Dimension, 16, 16));
		iconSizes->set(2, $$new($Dimension, 18, 18));
		iconSizes->set(3, $$new($Dimension, 24, 24));
		iconSizes->set(4, $$new($Dimension, 20, 20));
		iconSizes->set(5, $$new($Dimension, 32, 32));
		iconSizes->set(6, $$new($Dimension, 48, 48));
		appContext->put(GTKStyle$GTKStockIconInfo::ICON_SIZE_KEY, iconSizes);
	}
	return iconSizes;
}

$Dimension* GTKStyle$GTKStockIconInfo::getIconSize(int32_t type) {
	$init(GTKStyle$GTKStockIconInfo);
	$var($DimensionArray, iconSizes, getIconSizesMap());
	return type >= 0 && type < $nc(iconSizes)->length ? $nc(iconSizes)->get(type) : ($Dimension*)nullptr;
}

void GTKStyle$GTKStockIconInfo::setIconSize(int32_t type, int32_t w, int32_t h) {
	$init(GTKStyle$GTKStockIconInfo);
	$useLocalCurrentObjectStackCache();
	$var($DimensionArray, iconSizes, getIconSizesMap());
	if (type >= 0 && type < $nc(iconSizes)->length) {
		iconSizes->set(type, $$new($Dimension, w, h));
	}
}

int32_t GTKStyle$GTKStockIconInfo::getIconType($String* size) {
	$init(GTKStyle$GTKStockIconInfo);
	if (size == nullptr) {
		return -100;
	}
	if (GTKStyle$GTKStockIconInfo::ICON_TYPE_MAP == nullptr) {
		initIconTypeMap();
	}
	$var($Integer, n, $cast($Integer, $nc(GTKStyle$GTKStockIconInfo::ICON_TYPE_MAP)->get(size)));
	return n != nullptr ? $nc(n)->intValue() : -100;
}

void GTKStyle$GTKStockIconInfo::initIconTypeMap() {
	$init(GTKStyle$GTKStockIconInfo);
	$useLocalCurrentObjectStackCache();
	$assignStatic(GTKStyle$GTKStockIconInfo::ICON_TYPE_MAP, $new($HashMap));
	$nc(GTKStyle$GTKStockIconInfo::ICON_TYPE_MAP)->put("gtk-menu"_s, $($Integer::valueOf(1)));
	$nc(GTKStyle$GTKStockIconInfo::ICON_TYPE_MAP)->put("gtk-small-toolbar"_s, $($Integer::valueOf(2)));
	$nc(GTKStyle$GTKStockIconInfo::ICON_TYPE_MAP)->put("gtk-large-toolbar"_s, $($Integer::valueOf(3)));
	$nc(GTKStyle$GTKStockIconInfo::ICON_TYPE_MAP)->put("gtk-button"_s, $($Integer::valueOf(4)));
	$nc(GTKStyle$GTKStockIconInfo::ICON_TYPE_MAP)->put("gtk-dnd"_s, $($Integer::valueOf(5)));
	$nc(GTKStyle$GTKStockIconInfo::ICON_TYPE_MAP)->put("gtk-dialog"_s, $($Integer::valueOf(6)));
}

void clinit$GTKStyle$GTKStockIconInfo($Class* class$) {
	$assignStatic(GTKStyle$GTKStockIconInfo::ICON_SIZE_KEY, $new($StringBuffer, "IconSize"_s));
}

GTKStyle$GTKStockIconInfo::GTKStyle$GTKStockIconInfo() {
}

$Class* GTKStyle$GTKStockIconInfo::load$($String* name, bool initialize) {
	$loadClass(GTKStyle$GTKStockIconInfo, name, initialize, &_GTKStyle$GTKStockIconInfo_ClassInfo_, clinit$GTKStyle$GTKStockIconInfo, allocate$GTKStyle$GTKStockIconInfo);
	return class$;
}

$Class* GTKStyle$GTKStockIconInfo::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com