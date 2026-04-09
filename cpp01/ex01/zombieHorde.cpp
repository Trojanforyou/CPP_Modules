/*   By: msokolov <msokolov@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 19:21:12 by msokolov          #+#    #+#             */
/*   Updated: 2026/02/24 13:07:15 by msokolov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::announce()
{
    std::cout << _Name << ":" << "BraiiiiiiinnnzzzZ...";
}
void    Zombie::SetName(std::string name)
{
    _Name = name;
}

Zombie *zombieHorde(int n, std::string name)
{
    Zombie *zombie;

    zombie = new Zombie[n];
    if (zombie == NULL)
        return(NULL);
    zombie->SetName("Bob");
    return(zombie);
}