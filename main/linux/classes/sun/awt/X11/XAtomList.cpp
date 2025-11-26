#include <sun/awt/X11/XAtomList.h>

#include <java/util/AbstractSet.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <sun/awt/X11/XAtom.h>
#include <sun/awt/X11/XToolkit.h>
#include <jcpp.h>

using $XAtomArray = $Array<::sun::awt::X11::XAtom>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $XAtom = ::sun::awt::X11::XAtom;
using $XToolkit = ::sun::awt::X11::XToolkit;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XAtomList_FieldInfo_[] = {
	{"atoms", "Ljava/util/Set;", "Ljava/util/Set<Lsun/awt/X11/XAtom;>;", 0, $field(XAtomList, atoms)},
	{}
};

$MethodInfo _XAtomList_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XAtomList::*)()>(&XAtomList::init$))},
	{"<init>", "(JI)V", nullptr, $PUBLIC, $method(static_cast<void(XAtomList::*)(int64_t,int32_t)>(&XAtomList::init$))},
	{"<init>", "([Lsun/awt/X11/XAtom;)V", nullptr, $PUBLIC, $method(static_cast<void(XAtomList::*)($XAtomArray*)>(&XAtomList::init$))},
	{"add", "(Lsun/awt/X11/XAtom;)V", nullptr, $PUBLIC},
	{"addAll", "(Lsun/awt/X11/XAtomList;)V", nullptr, $PUBLIC},
	{"contains", "(Lsun/awt/X11/XAtom;)Z", nullptr, $PUBLIC},
	{"getAtoms", "()[Lsun/awt/X11/XAtom;", nullptr, $PUBLIC},
	{"getAtomsData", "()J", nullptr, $PUBLIC},
	{"init", "(JI)V", nullptr, $PRIVATE, $method(static_cast<void(XAtomList::*)(int64_t,int32_t)>(&XAtomList::init))},
	{"init", "([Lsun/awt/X11/XAtom;)V", nullptr, $PRIVATE, $method(static_cast<void(XAtomList::*)($XAtomArray*)>(&XAtomList::init))},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Lsun/awt/X11/XAtom;>;", $PUBLIC},
	{"remove", "(Lsun/awt/X11/XAtom;)V", nullptr, $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{"subset", "(ILjava/util/Map;)Lsun/awt/X11/XAtomList;", "(ILjava/util/Map<Ljava/lang/Integer;Lsun/awt/X11/XAtom;>;)Lsun/awt/X11/XAtomList;", $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XAtomList_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XAtomList",
	"java.lang.Object",
	nullptr,
	_XAtomList_FieldInfo_,
	_XAtomList_MethodInfo_
};

$Object* allocate$XAtomList($Class* clazz) {
	return $of($alloc(XAtomList));
}

void XAtomList::init$() {
	$set(this, atoms, $new($HashSet));
}

void XAtomList::init$(int64_t data, int32_t count) {
	$set(this, atoms, $new($HashSet));
	init(data, count);
}

void XAtomList::init(int64_t data, int32_t count) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < count; ++i) {
		int64_t var$0 = $XToolkit::getDisplay();
		add($$new($XAtom, var$0, $XAtom::getAtom(data + count * $XAtom::getAtomSize())));
	}
}

void XAtomList::init$($XAtomArray* atoms) {
	$set(this, atoms, $new($HashSet));
	init(atoms);
}

void XAtomList::init($XAtomArray* atoms) {
	for (int32_t i = 0; i < $nc(atoms)->length; ++i) {
		add(atoms->get(i));
	}
}

$XAtomArray* XAtomList::getAtoms() {
	$useLocalCurrentObjectStackCache();
	$var($XAtomArray, res, $new($XAtomArray, size()));
	$var($Iterator, iter, $nc(this->atoms)->iterator());
	int32_t i = 0;
	while ($nc(iter)->hasNext()) {
		res->set(i++, $cast($XAtom, $(iter->next())));
	}
	return res;
}

int64_t XAtomList::getAtomsData() {
	return $XAtom::toData($(getAtoms()));
}

bool XAtomList::contains($XAtom* atom) {
	return $nc(this->atoms)->contains(atom);
}

void XAtomList::add($XAtom* atom) {
	$nc(this->atoms)->add(atom);
}

void XAtomList::remove($XAtom* atom) {
	$nc(this->atoms)->remove(atom);
}

int32_t XAtomList::size() {
	return $nc(this->atoms)->size();
}

XAtomList* XAtomList::subset(int32_t mask, $Map* mapping) {
	$useLocalCurrentObjectStackCache();
	$var(XAtomList, res, $new(XAtomList));
	$var($Iterator, iter, $nc($($nc(mapping)->keySet()))->iterator());
	while ($nc(iter)->hasNext()) {
		$var($Integer, bits, $cast($Integer, iter->next()));
		int32_t var$0 = ((int32_t)(mask & (uint32_t)$nc(bits)->intValue()));
		if (var$0 == bits->intValue()) {
			$var($XAtom, atom, $cast($XAtom, mapping->get(bits)));
			if (contains(atom)) {
				res->add(atom);
			}
		}
	}
	return res;
}

$Iterator* XAtomList::iterator() {
	return $nc(this->atoms)->iterator();
}

void XAtomList::addAll(XAtomList* atoms) {
	$useLocalCurrentObjectStackCache();
	$var($Iterator, iter, $nc(atoms)->iterator());
	while ($nc(iter)->hasNext()) {
		add($cast($XAtom, $(iter->next())));
	}
}

$String* XAtomList::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buf, $new($StringBuilder));
	buf->append("["_s);
	$var($Iterator, iter, $nc(this->atoms)->iterator());
	while ($nc(iter)->hasNext()) {
		buf->append($($nc(($cast($XAtom, $(iter->next()))))->toString()));
		if (iter->hasNext()) {
			buf->append(", "_s);
		}
	}
	buf->append("]"_s);
	return buf->toString();
}

XAtomList::XAtomList() {
}

$Class* XAtomList::load$($String* name, bool initialize) {
	$loadClass(XAtomList, name, initialize, &_XAtomList_ClassInfo_, allocate$XAtomList);
	return class$;
}

$Class* XAtomList::class$ = nullptr;

		} // X11
	} // awt
} // sun