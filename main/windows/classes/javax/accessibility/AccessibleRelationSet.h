#ifndef _javax_accessibility_AccessibleRelationSet_h_
#define _javax_accessibility_AccessibleRelationSet_h_
//$ class javax.accessibility.AccessibleRelationSet
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Vector;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleRelation;
	}
}

namespace javax {
	namespace accessibility {

class $export AccessibleRelationSet : public ::java::lang::Object {
	$class(AccessibleRelationSet, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AccessibleRelationSet();
	void init$();
	void init$($Array<::javax::accessibility::AccessibleRelation>* relations);
	virtual bool add(::javax::accessibility::AccessibleRelation* relation);
	virtual void addAll($Array<::javax::accessibility::AccessibleRelation>* relations);
	virtual void clear();
	virtual bool contains($String* key);
	virtual ::javax::accessibility::AccessibleRelation* get($String* key);
	virtual bool remove(::javax::accessibility::AccessibleRelation* relation);
	virtual int32_t size();
	virtual $Array<::javax::accessibility::AccessibleRelation>* toArray();
	virtual $String* toString() override;
	::java::util::Vector* relations = nullptr;
};

	} // accessibility
} // javax

#endif // _javax_accessibility_AccessibleRelationSet_h_