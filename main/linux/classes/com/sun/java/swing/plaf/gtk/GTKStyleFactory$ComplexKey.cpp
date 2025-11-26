#include <com/sun/java/swing/plaf/gtk/GTKStyleFactory$ComplexKey.h>

#include <com/sun/java/swing/plaf/gtk/GTKEngine$WidgetType.h>
#include <com/sun/java/swing/plaf/gtk/GTKStyleFactory.h>
#include <jcpp.h>

using $GTKEngine$WidgetType = ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType;
using $GTKStyleFactory = ::com::sun::java::swing::plaf::gtk::GTKStyleFactory;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$FieldInfo _GTKStyleFactory$ComplexKey_FieldInfo_[] = {
	{"wt", "Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;", nullptr, $PRIVATE | $FINAL, $field(GTKStyleFactory$ComplexKey, wt)},
	{"args", "[Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(GTKStyleFactory$ComplexKey, args)},
	{}
};

$MethodInfo _GTKStyleFactory$ComplexKey_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/gtk/GTKEngine$WidgetType;[Ljava/lang/Object;)V", nullptr, $TRANSIENT, $method(static_cast<void(GTKStyleFactory$ComplexKey::*)($GTKEngine$WidgetType*,$ObjectArray*)>(&GTKStyleFactory$ComplexKey::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GTKStyleFactory$ComplexKey_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.GTKStyleFactory$ComplexKey", "com.sun.java.swing.plaf.gtk.GTKStyleFactory", "ComplexKey", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _GTKStyleFactory$ComplexKey_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.GTKStyleFactory$ComplexKey",
	"java.lang.Object",
	nullptr,
	_GTKStyleFactory$ComplexKey_FieldInfo_,
	_GTKStyleFactory$ComplexKey_MethodInfo_,
	nullptr,
	nullptr,
	_GTKStyleFactory$ComplexKey_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.GTKStyleFactory"
};

$Object* allocate$GTKStyleFactory$ComplexKey($Class* clazz) {
	return $of($alloc(GTKStyleFactory$ComplexKey));
}

void GTKStyleFactory$ComplexKey::init$($GTKEngine$WidgetType* wt, $ObjectArray* args) {
	$set(this, wt, wt);
	$set(this, args, args);
}

int32_t GTKStyleFactory$ComplexKey::hashCode() {
	$useLocalCurrentObjectStackCache();
	int32_t hash = this->wt->hashCode();
	if (this->args != nullptr) {
		{
			$var($ObjectArray, arr$, this->args);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Object0, arg, arr$->get(i$));
				{
					hash = hash * 29 + (arg == nullptr ? 0 : $nc($of(arg))->hashCode());
				}
			}
		}
	}
	return hash;
}

bool GTKStyleFactory$ComplexKey::equals(Object$* o) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf(GTKStyleFactory$ComplexKey, o))) {
		return false;
	}
	$var(GTKStyleFactory$ComplexKey, that, $cast(GTKStyleFactory$ComplexKey, o));
	if (this->wt == $nc(that)->wt) {
		if (this->args == nullptr && that->args == nullptr) {
			return true;
		}
		if (this->args != nullptr && that->args != nullptr && $nc(this->args)->length == $nc(that->args)->length) {
			for (int32_t i = 0; i < $nc(this->args)->length; ++i) {
				$var($Object0, a1, $nc(this->args)->get(i));
				$var($Object0, a2, $nc(that->args)->get(i));
				if (!(a1 == nullptr ? a2 == nullptr : $nc($of(a1))->equals(a2))) {
					return false;
				}
			}
			return true;
		}
	}
	return false;
}

$String* GTKStyleFactory$ComplexKey::toString() {
	$var($String, str, $str({"ComplexKey[wt="_s, this->wt}));
	if (this->args != nullptr) {
		$plusAssign(str, ",args=["_s);
		for (int32_t i = 0; i < $nc(this->args)->length; ++i) {
			$plusAssign(str, $nc(this->args)->get(i));
			if (i < $nc(this->args)->length - 1) {
				$plusAssign(str, ","_s);
			}
		}
		$plusAssign(str, "]"_s);
	}
	$plusAssign(str, "]"_s);
	return str;
}

GTKStyleFactory$ComplexKey::GTKStyleFactory$ComplexKey() {
}

$Class* GTKStyleFactory$ComplexKey::load$($String* name, bool initialize) {
	$loadClass(GTKStyleFactory$ComplexKey, name, initialize, &_GTKStyleFactory$ComplexKey_ClassInfo_, allocate$GTKStyleFactory$ComplexKey);
	return class$;
}

$Class* GTKStyleFactory$ComplexKey::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com