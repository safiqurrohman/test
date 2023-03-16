<?php
 include 'connect.php';
 $id=$_GET['updateid'];
 $sql="select * from `crud` where id=$id";
 $result=mysqli_query($con,$sql);
 $row=mysqli_fetch_assoc($result);
 $nama=$row['nama'];
 $alamat=$row['alamat'];
 $nomor=$row['nomor'];
 $email=$row['email'];
 $password=$row['password'];


 if(isset($_POST['submit'])){
     $nama=$_POST['nama'];
     $alamat=$_POST['alamat'];
     $nomor=$_POST['nomor'];
     $email=$_POST['email'];
     $password=$_POST['password'];

     $sql="update `crud` set id=$id,nama='$nama',alamat='$alamat',nomor='$nomor',email='$email',password='$password'
     where id=$id";
     $result=mysqli_query($con,$sql);
     if($result){
        // echo "update data sukses";
        header('location: display.php');
     }else{
        die(msqli_error($con));
     }
    }
?>

<!doctype html>
<html lang="en">
  <head>
    <!-- Required meta tags -->
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">

    <!-- Bootstrap CSS -->
    <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@4.0.0/dist/css/bootstrap.min.css">

    <title>user</title>
  </head>
  <body>
        <div class="container my-5">
            <form method="post" >
                <div class="form-group">
                    <label >Nama</label>
                    <input type="text" class="form-control"  placeholder="Masukkan nama lengkap " name="nama" value="<?php echo $nama; ?>">
                </div>
                <div class="form-group">
                    <label >Alamat</label>
                    <input type="text" class="form-control"  placeholder="Masukkan alamat  " name="alamat" autocomplete="off" value="<?php echo $alamat; ?>">
                </div>
                <div class="form-group">
                    <label >No.Telp</label>
                    <input type="number" class="form-control"  placeholder="Masukkan No.telephon " name="nomor" autocomplete="off" value="<?php echo $nomor; ?>">
                </div>
                <div class="form-group">
                    <label >Email</label>
                    <input type="email" class="form-control"  placeholder="Masukkan email " name="email" autocomplete="off" value="<?php echo $email; ?>">
                </div>
                <div class="form-group">
                    <label >Password</label>
                    <input type="password" class="form-control"  placeholder="Masukkan password " name="password" autocomplete="off" value="<?php echo $password; ?>">
                </div>
                <button type="submit" name="submit" class="btn btn-primary" style="padding:0.5rem 2.5rem; margin-top:1rem;">update</button>
            </form>
        </div>
  </body>
</html>