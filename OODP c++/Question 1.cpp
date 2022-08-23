#include<iostream>
#include<string>
using namespace std;
class Entity
{
public:
    virtual string GetName(){ return "Entity";}

};
class player :public Entity
{
private:
    string m_name;

public:
    player(const string& name)
      : m_name(name){}
      string GetName(){ return m_name;}
};
void show(Entity* p)
{
  cout<<p->GetName()<<endl;;
}
int main()
{
    Entity* e=new Entity();
    player* p=new player("Farhad");
    show(e);
    show(p);

}


