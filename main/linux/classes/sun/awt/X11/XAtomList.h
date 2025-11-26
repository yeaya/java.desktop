#ifndef _sun_awt_X11_XAtomList_h_
#define _sun_awt_X11_XAtomList_h_
//$ class sun.awt.X11.XAtomList
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Iterator;
		class Map;
		class Set;
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class XAtom;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XAtomList : public ::java::lang::Object {
	$class(XAtomList, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XAtomList();
	void init$();
	void init$(int64_t data, int32_t count);
	void init$($Array<::sun::awt::X11::XAtom>* atoms);
	virtual void add(::sun::awt::X11::XAtom* atom);
	virtual void addAll(::sun::awt::X11::XAtomList* atoms);
	virtual bool contains(::sun::awt::X11::XAtom* atom);
	virtual $Array<::sun::awt::X11::XAtom>* getAtoms();
	virtual int64_t getAtomsData();
	void init(int64_t data, int32_t count);
	void init($Array<::sun::awt::X11::XAtom>* atoms);
	virtual ::java::util::Iterator* iterator();
	virtual void remove(::sun::awt::X11::XAtom* atom);
	virtual int32_t size();
	virtual ::sun::awt::X11::XAtomList* subset(int32_t mask, ::java::util::Map* mapping);
	virtual $String* toString() override;
	::java::util::Set* atoms = nullptr;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XAtomList_h_