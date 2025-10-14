#ifndef _java_beans_XMLEncoder_h_
#define _java_beans_XMLEncoder_h_
//$ class java.beans.XMLEncoder
//$ extends java.beans.Encoder
//$ implements java.lang.AutoCloseable

#include <java/beans/Encoder.h>
#include <java/lang/Array.h>
#include <java/lang/AutoCloseable.h>

namespace java {
	namespace beans {
		class Expression;
		class NameGenerator;
		class Statement;
		class XMLEncoder$ValueData;
	}
}
namespace java {
	namespace io {
		class OutputStream;
		class OutputStreamWriter;
	}
}
namespace java {
	namespace nio {
		namespace charset {
			class CharsetEncoder;
		}
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
	}
}

namespace java {
	namespace beans {

class $import XMLEncoder : public ::java::beans::Encoder, public ::java::lang::AutoCloseable {
	$class(XMLEncoder, $NO_CLASS_INIT, ::java::beans::Encoder, ::java::lang::AutoCloseable)
public:
	XMLEncoder();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::io::OutputStream* out);
	void init$(::java::io::OutputStream* out, $String* charset, bool declaration, int32_t indentation);
	virtual void clear() override;
	virtual void close() override;
	static $String* createString(int32_t code);
	$String* createString($String* string);
	virtual void flush();
	virtual ::java::beans::Statement* getMissedStatement();
	virtual $Object* getOwner();
	::java::beans::XMLEncoder$ValueData* getValueData(Object$* o);
	static bool isValidCharCode(int32_t code);
	void mark(Object$* o, bool isArgument);
	void mark(::java::beans::Statement* stm);
	void outputStatement(::java::beans::Statement* exp, Object$* outer, bool isArgument);
	void outputValue(Object$* value, Object$* outer, bool isArgument);
	void outputXML($String* tag, $String* attributes, Object$* value, $ObjectArray* args);
	static $Class* primitiveTypeFor($Class* wrapper);
	$String* quote($String* s);
	static $String* quoteCharCode(int32_t code);
	virtual void setOwner(Object$* owner);
	::java::util::List* statementList(Object$* target);
	virtual $String* toString() override;
	virtual void writeExpression(::java::beans::Expression* oldExp) override;
	virtual void writeObject(Object$* o) override;
	virtual void writeStatement(::java::beans::Statement* oldStm) override;
	void writeln($String* exp);
	::java::nio::charset::CharsetEncoder* encoder = nullptr;
	$String* charset = nullptr;
	bool declaration = false;
	::java::io::OutputStreamWriter* out = nullptr;
	$Object* owner = nullptr;
	int32_t indentation = 0;
	bool internal = false;
	::java::util::Map* valueToExpression = nullptr;
	::java::util::Map* targetToStatementList = nullptr;
	bool preambleWritten = false;
	::java::beans::NameGenerator* nameGenerator = nullptr;
};

	} // beans
} // java

#endif // _java_beans_XMLEncoder_h_