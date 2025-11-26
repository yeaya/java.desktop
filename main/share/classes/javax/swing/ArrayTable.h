#ifndef _javax_swing_ArrayTable_h_
#define _javax_swing_ArrayTable_h_
//$ class javax.swing.ArrayTable
//$ extends java.lang.Cloneable

#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

#pragma push_macro("ARRAY_BOUNDARY")
#undef ARRAY_BOUNDARY

namespace java {
	namespace io {
		class ObjectOutputStream;
	}
}

namespace javax {
	namespace swing {

class ArrayTable : public ::java::lang::Cloneable {
	$class(ArrayTable, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	ArrayTable();
	void init$();
	virtual void clear();
	virtual $Object* clone() override;
	virtual bool containsKey(Object$* key);
	virtual $Object* get(Object$* key);
	virtual $ObjectArray* getKeys($ObjectArray* keys);
	void grow();
	bool isArray();
	virtual void put(Object$* key, Object$* value);
	virtual $Object* remove(Object$* key);
	void shrink();
	virtual int32_t size();
	static void writeArrayTable(::java::io::ObjectOutputStream* s, ::javax::swing::ArrayTable* table);
	$Object* table = nullptr;
	static const int32_t ARRAY_BOUNDARY = 8;
};

	} // swing
} // javax

#pragma pop_macro("ARRAY_BOUNDARY")

#endif // _javax_swing_ArrayTable_h_