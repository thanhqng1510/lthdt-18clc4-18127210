#ifndef Animal_h
#define Animal_h

enum class ANIMAL_TYPE {
    COW = 0,
    SHEEP = 1,
    GOAT = 2
};

class Animal {
protected:
    ANIMAL_TYPE m_type;
    
public:
    inline Animal(ANIMAL_TYPE type) : m_type(type) {}
    
    virtual ~Animal() = default;
    
public:
    virtual int GiveBirth() const = 0;
    virtual int GetMilk() const = 0;
    virtual void Cry() const = 0;
    
    inline ANIMAL_TYPE GetType() const {
        return m_type;
    }
};

#endif /* Animal_h */
