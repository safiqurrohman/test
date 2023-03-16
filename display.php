<?php
 include 'connect.php';

?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <!-- Bootstrap CSS -->
    <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@4.0.0/dist/css/bootstrap.min.css">
    <link rel="stylesheet" href="style.css">
    <title>Halaman utama</title>
</head>
<body>
  <nav class="navbar navbar-expand-lg navbar-light bg-aqua" style="background-color:rgb(82, 94, 255);">
    <h3 class="navbar-brand">DATA PENDUDUK</h3>
    <div class="collapse navbar-collapse" id="navbarSupportedContent">
      <ul class="navbar-nav mr-auto">
        <li class="nav-item dropdown">
          <a class="nav-link dropdown-toggle" href="#" id="navbarDropdown" role="button" data-toggle="dropdown" aria-haspopup="true" aria-expanded="false">
            Dropdown
          </a>
          <div class="dropdown-menu" aria-labelledby="navbarDropdown">
            <a class="dropdown-item" href="#">Action</a>
            <a class="dropdown-item" href="#">Another action</a>
            <div class="dropdown-divider"></div>
            <a class="dropdown-item" href="#">Something else here</a>
          </div>
        </li>
      </ul>
      <form class="form-inline my-2 my-lg-0">
        <input class="form-control mr-sm-2" type="search" placeholder="Search" aria-label="Search">
        <button style="background-color: rgb(19, 135, 148); color: #fff" class="btn btn-outline-success" type="submit">Search</button>
      </form>
    </div>
  </nav>

  <div class="container" style="background-color:;">
        <button class="btn btn-primary " style="margin:2rem 0 0.5rem 0;" ><a href="user.php" class="text-light">Tambah data</a>
        </button>

    <table class="table" style="text-decoration: none;">
      <thead class="thead-dark" >
        <tr>
          <th scope="col">id</th>
          <th scope="col">Nama</th>
          <th scope="col">Alamat</th>
          <th scope="col">No.Telp</th>
          <th scope="col">Email</th>
          <th scope="col">Password</th>
          <th scope="col">Aktivitas</th>
        </tr>
      </thead>
      <tbody>
        <tr>

        <?php
        $sql="select * from `crud`";
        $result=mysqli_query($con,$sql);
        if($result){
            while($row=mysqli_fetch_assoc($result)){
                $id=$row['id'];
                $nama=$row['nama'];
                $alamat=$row['alamat'];
                $nomor=$row['nomor'];
                $email=$row['email'];
                $password=$row['password'];
                echo ' <tr>
                    <th scope="row">'.$id.'</th>
                    <td>'.$nama.'</td>
                    <td>'.$alamat.'</td>
                    <td>'.$nomor.'</td>
                    <td>'.$email.'</td>
                    <td>'.$password.'</td>
                    <td >
                    <button class="btn btn-primary"><a href="update.php? updateid='.$id.'" class="text-light">Edit</a></button>
                    <button class="btn btn-danger"><a href="delete.php? deleteid='.$id.'" class="text-light">Hapus</a></button>
                    </td>
                    </tr> ';
            }
        }


        ?>
        </tbody>
    </table>
  </div>
</body>
</html>