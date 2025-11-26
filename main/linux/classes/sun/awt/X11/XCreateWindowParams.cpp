#include <sun/awt/X11/XCreateWindowParams.h>

#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;

namespace sun {
	namespace awt {
		namespace X11 {

$MethodInfo _XCreateWindowParams_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XCreateWindowParams::*)()>(&XCreateWindowParams::init$))},
	{"<init>", "([Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(XCreateWindowParams::*)($ObjectArray*)>(&XCreateWindowParams::init$))},
	{"add", "(Ljava/lang/Object;Ljava/lang/Object;)Lsun/awt/X11/XCreateWindowParams;", nullptr, $PUBLIC},
	{"add", "(Ljava/lang/Object;I)Lsun/awt/X11/XCreateWindowParams;", nullptr, $PUBLIC},
	{"add", "(Ljava/lang/Object;J)Lsun/awt/X11/XCreateWindowParams;", nullptr, $PUBLIC},
	{"delete", "(Ljava/lang/Object;)Lsun/awt/X11/XCreateWindowParams;", nullptr, $PUBLIC},
	{"init", "([Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(static_cast<void(XCreateWindowParams::*)($ObjectArray*)>(&XCreateWindowParams::init))},
	{"putIfNull", "(Ljava/lang/Object;Ljava/lang/Object;)Lsun/awt/X11/XCreateWindowParams;", nullptr, $PUBLIC},
	{"putIfNull", "(Ljava/lang/Object;I)Lsun/awt/X11/XCreateWindowParams;", nullptr, $PUBLIC},
	{"putIfNull", "(Ljava/lang/Object;J)Lsun/awt/X11/XCreateWindowParams;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XCreateWindowParams_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XCreateWindowParams",
	"java.util.HashMap",
	nullptr,
	nullptr,
	_XCreateWindowParams_MethodInfo_,
	"Ljava/util/HashMap<Ljava/lang/Object;Ljava/lang/Object;>;"
};

$Object* allocate$XCreateWindowParams($Class* clazz) {
	return $of($alloc(XCreateWindowParams));
}

void XCreateWindowParams::init$() {
	$HashMap::init$();
}

void XCreateWindowParams::init$($ObjectArray* map) {
	$HashMap::init$();
	init(map);
}

void XCreateWindowParams::init($ObjectArray* map) {
	if ($nc(map)->length % 2 != 0) {
		$throwNew($IllegalArgumentException, "Map size should be devisible by two"_s);
	}
	for (int32_t i = 0; i < $nc(map)->length; i += 2) {
		put(map->get(i), map->get(i + 1));
	}
}

XCreateWindowParams* XCreateWindowParams::putIfNull(Object$* key, Object$* value) {
	if (!containsKey(key)) {
		put(key, value);
	}
	return this;
}

XCreateWindowParams* XCreateWindowParams::putIfNull(Object$* key, int32_t value) {
	if (!containsKey(key)) {
		put(key, $($Integer::valueOf(value)));
	}
	return this;
}

XCreateWindowParams* XCreateWindowParams::putIfNull(Object$* key, int64_t value) {
	if (!containsKey(key)) {
		put(key, $($Long::valueOf(value)));
	}
	return this;
}

XCreateWindowParams* XCreateWindowParams::add(Object$* key, Object$* value) {
	put(key, value);
	return this;
}

XCreateWindowParams* XCreateWindowParams::add(Object$* key, int32_t value) {
	put(key, $($Integer::valueOf(value)));
	return this;
}

XCreateWindowParams* XCreateWindowParams::add(Object$* key, int64_t value) {
	put(key, $($Long::valueOf(value)));
	return this;
}

XCreateWindowParams* XCreateWindowParams::delete$(Object$* key) {
	remove(key);
	return this;
}

$String* XCreateWindowParams::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buf, $new($StringBuilder));
	$var($Iterator, eIter, $nc($(entrySet()))->iterator());
	while ($nc(eIter)->hasNext()) {
		$var($Map$Entry, entry, $cast($Map$Entry, eIter->next()));
		buf->append($($nc(entry)->getKey()))->append(": "_s)->append($($nc(entry)->getValue()))->append("\n"_s);
	}
	return buf->toString();
}

XCreateWindowParams::XCreateWindowParams() {
}

$Class* XCreateWindowParams::load$($String* name, bool initialize) {
	$loadClass(XCreateWindowParams, name, initialize, &_XCreateWindowParams_ClassInfo_, allocate$XCreateWindowParams);
	return class$;
}

$Class* XCreateWindowParams::class$ = nullptr;

		} // X11
	} // awt
} // sun