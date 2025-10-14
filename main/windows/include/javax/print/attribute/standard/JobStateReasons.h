#ifndef _javax_print_attribute_standard_JobStateReasons_h_
#define _javax_print_attribute_standard_JobStateReasons_h_
//$ class javax.print.attribute.standard.JobStateReasons
//$ extends java.util.HashSet
//$ implements javax.print.attribute.PrintJobAttribute

#include <java/util/HashSet.h>
#include <javax/print/attribute/PrintJobAttribute.h>

namespace java {
	namespace util {
		class Collection;
	}
}
namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {
				class JobStateReason;
			}
		}
	}
}

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

class $import JobStateReasons : public ::java::util::HashSet, public ::javax::print::attribute::PrintJobAttribute {
	$class(JobStateReasons, $NO_CLASS_INIT, ::java::util::HashSet, ::javax::print::attribute::PrintJobAttribute)
public:
	JobStateReasons();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(int32_t initialCapacity);
	void init$(int32_t initialCapacity, float loadFactor);
	void init$(::java::util::Collection* collection);
	bool add(::javax::print::attribute::standard::JobStateReason* o);
	virtual bool add(Object$* o) override;
	virtual $Class* getCategory() override;
	virtual $String* getName() override;
	using ::java::util::HashSet::toArray;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x7ACE46E39EBD5424;
};

			} // standard
		} // attribute
	} // print
} // javax

#endif // _javax_print_attribute_standard_JobStateReasons_h_