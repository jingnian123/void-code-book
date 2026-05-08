package attack;

public class Roletest {
    public static void main(String[] args) {
        Role role1 = new Role("路飞",100,'男');
        Role role2 = new Role("路奇",100,'男');
        role1.showrole();
        role2.showrole();
        while(true)
        {
            if(role1.getBlood()<=0)
            {
                System.out.println(role2.getName()+"胜利");
                break;
            }
            else if(role2.getBlood()<=0)
            {
                System.out.println(role1.getName()+"胜利");
                break;
            }
            role1.attack(role2);
            role2.attack(role1);
            System.out.println(role1.getName()+"当前血量："+role1.getBlood());
            System.out.println(role2.getName()+"当前血量："+role2.getBlood());
        }
    }
}
