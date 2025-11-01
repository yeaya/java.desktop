#ifndef _javax_print_DocFlavor_h_
#define _javax_print_DocFlavor_h_
//$ class javax.print.DocFlavor
//$ extends java.io.Serializable
//$ implements java.lang.Cloneable

#include <java/io/Serializable.h>
#include <java/lang/Cloneable.h>

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace javax {
	namespace print {
		class MimeType;
	}
}

namespace javax {
	namespace print {

class $export DocFlavor : public ::java::io::Serializable, public ::java::lang::Cloneable {
	$class(DocFlavor, 0, ::java::io::Serializable, ::java::lang::Cloneable)
public:
	DocFlavor();
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$($String* mimeType, $String* className);
	virtual bool equals(Object$* obj) override;
	virtual $String* getMediaSubtype();
	virtual $String* getMediaType();
	virtual $String* getMimeType();
	virtual $String* getParameter($String* paramName);
	virtual $String* getRepresentationClassName();
	$String* getStringValue();
	virtual int32_t hashCode() override;
	void readObject(::java::io::ObjectInputStream* s);
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	static const int64_t serialVersionUID = (int64_t)0xC161DE6BD3035007;
	static $String* hostEncoding;
	::javax::print::MimeType* myMimeType = nullptr;
	$String* myClassName = nullptr;
	$String* myStringValue = nullptr;
};

	} // print
} // javax

#endif // _javax_print_DocFlavor_h_