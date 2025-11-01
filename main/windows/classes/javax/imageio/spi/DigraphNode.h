#ifndef _javax_imageio_spi_DigraphNode_h_
#define _javax_imageio_spi_DigraphNode_h_
//$ class javax.imageio.spi.DigraphNode
//$ extends java.lang.Cloneable
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Cloneable.h>

namespace java {
	namespace util {
		class Iterator;
		class Set;
	}
}

namespace javax {
	namespace imageio {
		namespace spi {

class DigraphNode : public ::java::lang::Cloneable, public ::java::io::Serializable {
	$class(DigraphNode, $NO_CLASS_INIT, ::java::lang::Cloneable, ::java::io::Serializable)
public:
	DigraphNode();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(Object$* data);
	virtual bool addEdge(::javax::imageio::spi::DigraphNode* node);
	void decrementInDegree();
	virtual void dispose();
	virtual $Object* getData();
	virtual int32_t getInDegree();
	virtual ::java::util::Iterator* getOutNodes();
	virtual bool hasEdge(::javax::imageio::spi::DigraphNode* node);
	void incrementInDegree();
	virtual bool removeEdge(::javax::imageio::spi::DigraphNode* node);
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x49AABB997551F5B9;
	$Object* data = nullptr;
	::java::util::Set* outNodes = nullptr;
	int32_t inDegree = 0;
	::java::util::Set* inNodes = nullptr;
};

		} // spi
	} // imageio
} // javax

#endif // _javax_imageio_spi_DigraphNode_h_